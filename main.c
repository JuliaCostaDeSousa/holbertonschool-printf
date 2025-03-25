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

	len = _printf("Positive:[%d]\n", 762534);
    len2 =printf("Positive:[%d]\n", 762534);
	_printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("Negative:[%d]\n", -762534);
    len2 =printf("Negative:[%d]\n", -762534);
	_printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

	len = _printf("Negative:[%d]\n", 0);
    len2 =printf("Negative:[%d]\n", 0);
	_printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

	
	len = _printf("Negative:[%d]\n", -0);
    len2 =printf("Negative:[%d]\n", -0);
	_printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    return (0);
}