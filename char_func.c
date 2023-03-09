#include "main.h"
#include <stdarg.h>
/**
 * func_char - prints characters.
 *
 * @list: the list of arguments.
 *
 * Return: 1 if char, 0 if not.
 */

int func_char(va_list list)
{
	char c;

	c = (va_arg(list, int));
	_putchar(c);

	return (1);
}

/**
 * func_string - prints a string
 *
 * @list: the list of arguments passed.
 *
 * Return: the number of characters of the string.
 */

int func_string(va_list list)
{
	int i;
	char *str;

	str = (va_arg(list, char *));
	if (str == 0)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
 * func_percent - prints percents
 *
 * @list: the list of arguments
 *
 * Return: 1 if percent, 0 if not.
 */
int func_percent(__attribute__((unused)) va_list list)
{
	_putchar('%');

	return (1);
}
