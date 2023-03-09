#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - Function produces output according to
 * a format
 *
 * @format: the specified format to print the output
 *
 * Return: the number of chars printed - null byte,
 * otherwise NULL
 */

int _printf(const char *format, ...)
{
	int i, len = 0;
	va_list args;

	va_start(args, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			if (format[i] == 'c')
			{
				char c = va_arg(args, int);

				_putchar(c);
				len++;
			}
			else if (format[i] == 's')
			{
				char *s = va_arg(args, char *);

				if (s == NULL)
					return (-1);
				while (*s != '\0')
				{
					_putchar(*s);
					s++;
					len++;
				}
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				len++;
			}
			else if (format[i] != 'c' || format[i] != 's' || format[i] != '%')
				return (-1);
		}
		_putchar(format[i]);
		len++;
	}
	va_end(args);
	return (len);
}
