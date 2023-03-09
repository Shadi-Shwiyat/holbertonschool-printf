#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>


int _printf(const char *format, ...);
int _putchar(char c);
int func_char(va_list list);
int func_string(va_list list);
int func_percent(__attribute__((unused)) va_list list);
int func_digit(va_list list);
#endif
