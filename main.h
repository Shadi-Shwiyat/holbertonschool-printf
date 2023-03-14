#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <limits.h>
#include <string.h>

/**
* struct specifiers - structure to find the correct function
* and specifiers
* @letter: specifier conversion
* @handle: function
*
*/

typedef struct specifiers
{
	char *letter;
	int (*handle)(va_list);
} function_t;

int _printf(const char *format, ...);
int _putchar(char c);
int handle_character(va_list args);
int handle_string(va_list args);
int handle_percent(__attribute__((unused))va_list args);
int (*get_function(const char *specifier))(va_list);
int print_number(unsigned int n);
int countDigits(unsigned int num);
int _strlen(char *str);

#endif
