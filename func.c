#include "main.h"
#include <stdarg.h>

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
    else
    {
        negative = 0;
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
        i++;
    }

    str[i] = '\0';

    while (i--)
    {
	    _putchar(str[i]);
    }
    return (str);
}

/**
 * print_nums - prints numbers
 * @arg: va_list containing the argument to print
 * Return: the number of characters printed
 */
int print_nums(va_list arg)
{
	int num = va_arg(arg, int);
	char str[20];
	char *s = _itoa(num, str);
	int len = 0;

	while (*s)
	{
		len += _putchar(*s);
		s++;
	}

	return (len);
}

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

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		len++;
		str++;
	}

	return (len);
}
