#include "main.h"
#include <limits.h>

/**
  * print_nums - prints specific function
  * @arg: format
  * @print: print
  * Return: a function
  */
int print_nums(va_list arg)
{
	int h;
	int count = 1;
	int i = va_arg(arg, int);
	char t[11] = {"-2147483648"};

	if (i == INT_MIN)
	{
		for (h = 0; h <= 10; h++)
		{
			_putchar(t[h]);
		}
		return (11);
	}
	if (i < 0)
	{
		_putchar('_');
		count++;
		i = i * -1;
	}
	print_more(i);
	while (i / 10 != 0)
	{
		count++;
		i = i / 10;
	}
	return (count);
}

int print_more(int j)
{
	if ((j / 10) != 0)
	{
		print_more(j / 10);
	}
		_putchar('0' + (j % 10));

	return (0);
}
