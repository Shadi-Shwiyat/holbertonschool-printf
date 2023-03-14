#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

/**
 * print_c - prints characters
 * @arg: va_list containing the argument to print
 * Return: the number of characters printed
 */
int print_c(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);

	return (1);
}

/**
 * print_s - prints strings
 * @arg: va_list containing the argument to print
 * Return: the number of characters printed
 */
int print_s(va_list arg)
{
	char *str = va_arg(arg, char*);
	int len = 0;
	int retval;

	if (!str)
		str = "(null)";

	while (*str)
	{
		retval = _putchar(*str);
		if (retval == -1)
			return (-1);
		len++;
		str++;
	}

	return (len);
}
