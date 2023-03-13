#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    int x = 3;
    int y = 7;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("The value x is : %i and the value y is : %i, the sum of both is : %i\n", x, y, (x + y));
    printf("The value x is : %i and the value y is : %i, the sum of both is : %i\n", x, y, (x + y));
    printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 48);
    printf("Character:[%c]\n", 48);
    printf("This is a fake specifier : %k\n");
    len = _printf("This is a null termination char %c\n", '\0');
    len2 = printf("This is a null termination char %c\n", '\0');
    printf("The length of the string with null terminator is :%i\n", len);
    printf("The length of the string with null terminator is :%i\n", len2);
    printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    printf("%");
  
    return (0);
}


