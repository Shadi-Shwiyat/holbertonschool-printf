#include "main.h"
#include <stdarg.h>
#include <string.h>

/**
  * get_func - pointer to array
  * @conv_spec: specifiers0
  * Return: function that is pointed to
  */

int (*get_func(char conv_spec))(va_list)
{
	int j;

	printer_t funct[] = {
		{"i", print_nums},
		{"c", print_c},
		{"s", print_s},
		{"d", print_nums},
		{NULL, NULL}
	};
	for (j = 0; funct[j].spec != NULL; j++)
	{
		if (conv_spec == *(funct[j].spec))
			return (funct[j].func);
	}
	return (NULL);
}

/**
 * _printf - Function produces output according to
 * a format
 *
 * @format: String containing format specifiers
 *
 * Return: Length of the printed string
 */

int _printf(const char *format, ...)
{
	int i, len = 0;
	va_list args;
	int (*func)(va_list);

	va_start(args, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				len++;
				i++;
			}
			else
			{
				func = get_func(format[i]);
				if (func != NULL)
				{
					len += func(args);
					i++;
				}
			}
		}
		_putchar(format[i]);
		len++;
	}
	va_end(args);
	return (len);
}
