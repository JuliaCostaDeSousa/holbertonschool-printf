#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * print_integer - Prints an integer to the standard output.
 * @ap: A va_list argument containing the integer to print.
 *
 * Description: This function retrieves an integer from the variadic argument
 * list and prints it using `_putchar`. It correctly handles negative numbers
 * by printing a minus sign before processing the absolute value.
 * The function reverses the number before printing to ensure correct order.
 *
 * Return: The number of characters printed.
 */

int print_integer(va_list ap)
{
	int number = va_arg(ap, int);
	unsigned int number_unsigned_int = number;
	int number_reversed = 0;
	int count = 0;

	if (number < 0)
	{
		_putchar('-');
		count++;
		if (number == INT_MIN)
		number_unsigned_int = (unsigned int)INT_MAX + 1;
		else
		number_unsigned_int *= -1;
	}
	if (number_unsigned_int == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}

	/* Reverse the number so we can write it in the right order*/
	while (number_unsigned_int)
	{
		number_reversed = (number_reversed * 10) + (number_unsigned_int % 10);
		number_unsigned_int /= 10;
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
