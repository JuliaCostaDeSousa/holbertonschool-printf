#include "main.h"
#include <stdio.h>

/**
 * print_integer - writes an integer
 * @ap: argument containing the number to write
 * Return: length of argument to write
 */

int print_integer(va_list ap)
{
	int number = va_arg(ap, int);
	int number_reversed = 0;
	int count = 0;

	if (number < 0)
	{
		_putchar('-');
		number *= -1;
		count++;
	}

	if (number == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}

	/* Reverse the number so we can write it in the right order*/
	while (number)
	{
		number_reversed = (number_reversed * 10) + (number % 10);
		number /= 10;
	}
	/* Write the number in the right order*/
	while (number_reversed)
	{
		_putchar((number_reversed % 10) + '0');
		number_reversed /= 10;
		count++;
	}

	return (count);
}
