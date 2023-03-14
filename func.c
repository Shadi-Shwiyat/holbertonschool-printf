#include "main.h"
/**
 * pchar - return char
 * @arg: arg
 * Return: 1 on success
 */
int pchar(va_list arg)
{
	putchar(va_arg(arg, int));
	return (1);
}

/**
 * pstr - return an str
 * @arg: var to write
 * Return: string
 */
int pstr(va_list arg)
{
	int i = 0;
	char *s = va_arg(arg, char *);

	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * pperc - return per
 * @arg: arg
 * Return: per
 */
int pperc(va_list arg)
{
	(void)arg;
	putchar('%');
	return (1);
}

/**
 * pint - retun an int
 * @arg: arg
 * Return: len
 */
int pint(va_list arg)
{
	int n = va_arg(arg, int);
	int d, len;
	unsigned int num;

	d = 1;
	len = 0;
	num = n;
	if (n < 0)
	{
		putchar('-');
		len++;
		num = -n;
	}

	while (num / d > 9)
		d *= 10;
	while (d != 0)
	{
		putchar('0' + num / d);
		len++;
		num %= d;
		d /= 10;
	}
	return (len);
}

