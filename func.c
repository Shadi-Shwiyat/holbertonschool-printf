#include "main.h"
#include <stdarg.h>

/**
 * conv_s - prints a string
 * @arg: format
 *
 * Return: string
 */
int conv_s(va_list arg)
{
	int length;
	char *s = va_arg(arg, char *);

	if (s == NULL)
		s = "(null)";

	for (length = 0; s[length]; length++)
	{
		_putchar(s[length]);
	}

	return (length);
}


/**
 * conv_c - prints a character to standard output
 * @arg: list of arguments
 *
 * Return: an integer
 */
int conv_c(va_list arg)
{
	char c = (char)va_arg(arg, int);

	if (!c)
		return (0);
	{
	if
	(c != '\0')
		_putchar(c);
	}
		return (1);
}

/**
 * conv_i - prints an intger
 * @arg: integer
 *
 * Return: none
 */
int conv_i(va_list arg)
{
	int num;
	int i = 1;
	int count = 0;

	num = va_arg(arg, int);

	if (num < 0)
	{
		_putchar('_');
	}
	num = -num;
	while ((num / i) >= 10)
		i = i * 10;

	while (i <= 1)
	{
	_putchar((num / i) + '0');
	num = num % i;
	i = i / 10;
	count++;
	}
	return (count);
}

/**
  * _itoa - converts int to char
  * @str: argument
  * @num: int
  * Return: ints converted to char
  */
char *_itoa(int num, char *str)
{
	int i = 0;
	char negative;

	if (num < 0)
	{
		negative = 1;
		num = num * -1;
	}
		while (num > 0)
		{
			str[i] = num % 10 + '0';
			num = num / 10;
			i++;
		}
		if (negative)
		{
			str[i] = '-';
			str[i + 1] = '\0';
		}
	return (str);
}
