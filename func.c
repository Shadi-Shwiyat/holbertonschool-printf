#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
  * _itoa - converts int to char
  * @str: argument
  * @num: int
  * Return: ints converted to char
  */
char *_itoa(int num, char *str)
{
    int i = 0;
    int j, k;
    char negative;

    if (num < 0)
    {
        negative = 1;
        num = -num;
    }
    else
    {
        negative = 0;
    }

    do
    {
        str[i] = num % 10 + '0';
        num = num / 10;
        i++;
    } while (num != 0);

    if (negative)
    {
        str[i] = '-';
        i++;
    }

    str[i] = '\0';

    for (j = 0, k = i - 1; j < k; j++, k--)
    {
        char temp = str[j];
        str[j] = str[k];
        str[k] = temp;
    }

    return str;
}
/**
 * print_nums - prints numbers
 * @arg: va_list containing the argument to print
 * Return: the number of characters printed
 */
int print_nums(va_list arg)
{
	int num = va_arg(arg, int);
	char str[12];
	char *s = _itoa(num, str);
	int len = 0;

	while (*s != '\0')
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
