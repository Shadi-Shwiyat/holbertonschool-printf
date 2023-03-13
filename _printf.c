#include "main.h"
#include <stdarg.h>

/**
  * get_func - pointer to array
  * @conv_spec: specifiers
  * Return: function that is pointed to
  */

int (*get_func(char conv_spec))(va_list)
{
	int j;

	printer_t funct[] = {
		{"i", print_nums},
		{"c", conv_c},
		{"s", conv_s},
		{"d", print_nums},
		{NULL, NULL}
	};
	for (j = 0; funct[j].spec[0] != conv_spec; j++)
	{
		if (funct[j].spec == NULL)
			return (NULL);
	}
	return (funct[j].func);
}

/**
 * _printf - Prints formatted output
 *
 * @format: String containing format specifiers
 *
 * Return: Length of the printed string
 */
int _printf(const char *format, ...)
{
	int i, len;
	va_list args;

	va_start(args, format);

	i = 0;
	len = 0;
	while (format[i] != '\0')
	{
	if (format[i] == '%' && format[i + 1] != '\0')
	{
	i++;
	if (format[i] == 'c')
	{
	char c = va_arg(args, int);
	putchar(c);
	len++;
	}
	else if (format[i] == 's')
	{
	char *s = va_arg(args, char *);
	while (*s != '\0')
	{
	putchar(*s);
	s++;
	len++;
	}
	}
	else if (format[i] == '%')
	{
	putchar('%');
	len++;
	}
	else
	{
	putchar(format[i]);
	len++;
	}
	}
	else
	{
	putchar(format[i]);
	len++;
	}
	i++;
	}
	va_end(args);
	return (len);
}
