#include "main.h"
#include <limits.h>
/**
 * func_digit - prints digits.
 *
 * @list: the list of arguments being passed.
 *
 * Return: the digit, if not return -1.
 */

int func_digit(va_list list)
{
	unsigned int a;
	int i = 0, k = 0, n = 0, count = 0;

	n = va_arg(list, int);
	if (n <= INT_MAX && n >= INT_MIN)
	{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
			count += 1;
		}
		a = n;
		for (k = 0; (a / 10) > 0; k++)
		{
			a /= 10;
		}
		a = n;
		while (k != 0)
		{
			for (i = 0; i < k; i++)
			{
				a /= 10;
			}
			a %= 10;
			_putchar(a + '0');
			count++;
			k--;
			a = n;
		}
		_putchar(a % 10 + '0');
		count++;
	}
	else
	{
		return (-1);
	}
	return (count);
}
