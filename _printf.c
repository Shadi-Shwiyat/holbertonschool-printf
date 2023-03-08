#include "main.h"
#include <stdarg.h>

/** _printf - Function produces output according to
 * a format
 *
 * @format: the specified format to print the output
 *
 * Return: the number of chars printed - null byte,
 * otherwise NULL
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
		if (format[i] == '%' && format[i+1] != '\0')
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
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}

	va_end(args);

	return (len);
}
