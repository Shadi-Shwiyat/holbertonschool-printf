#include "main.h"
/**
 * get_printf - get_printf to get function from function.c
 * @ap: arg
 * @c: char
 * Return: char
 */
int get_func(const char c, va_list arg)
{
	int i = 0;
	int len = 0;
	print_t type[] = {
		{'c', pchar},
		{'s', pstr},
		{'%', pperc},
		{'d', pint},
		{'i', pint},
	};



	while (type[i].t != 0)
	{
		if (type[i].t == c)
		{
			len += type[i].f(arg);
			return (len);
		}
		i++;
	}
	return (0);
}
