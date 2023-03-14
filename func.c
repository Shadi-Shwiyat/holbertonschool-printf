#include "main.h"

/**
* handle_character - character specifier
* handle_string - string specifier
* @args: argument list containing the char to printas the next element
* Return: number of bytes printed
*/

int handle_character(va_list args)
{
	char c = va_arg(args, int);
	int count = 0, retval;

	retval = _putchar(c);
	if (retval == -1)
		return (-1);
	count++;

	return (count);
}

/**
* handle_string - string specifier
* @args: argument list
* Return: number of bytes printed
*/
int handle_string(va_list args)
{
	char *s = va_arg(args, char*);
	int count = 0;
	int retval;

	if (!s)
		s = "(null)";

	while (*s)
	{
		retval = _putchar(*s);
		if (retval == -1)
			return (-1);
		count++;
		s++;
	}
	return (count);
}

/**
* handle_percent - pervcent specifier
* @args: argument list
* Return: 1
*/

int handle_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}
