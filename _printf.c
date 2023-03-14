#include "main.h"

/**
* get_function - determine which print function to use
* @specifier: the character that identifies the type of
* variable to print
* getspecifier is a pointer to specifiers from printf.c
* Return: type[i].getspecifier if handle is found
*/

int (*get_function(const char *specifier))(va_list)
{
	int idx;

	function_t types[] = {

		{"c", handle_character},
		{"s", handle_string},
		{"%", handle_percent},
		{NULL, NULL}
	};
	for (idx = 0; types[idx].letter; idx++)
	{
		if (*specifier == types[idx].letter[0])
			return (types[idx].handle);
	}
	return (NULL);
}

/**
* _printf - prints a formatted string to output
*
* @format: input string to format with specifiers to print
*
* Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	int (*function)(va_list) = NULL;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
		{
			format++;
			function = get_function(format);
			if (*(format) == '\0')
				return (-1);

			else if (function == NULL)
			{
				_putchar(*(format - 1));
				_putchar(*format);
				count += 2;
			}
			else

				count += function(args);

		}
		else if (*format == '%' && *(format + 1) == '%')
		{
			format++;
			_putchar('%');
			count++;
		}
		else
		{
			_putchar(*format);
			count++;
		}

			format++;
	}
	va_end(args);
	return (count);
}
