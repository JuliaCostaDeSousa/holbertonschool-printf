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
	int count = 0, index = 0;
	unsigned int number_array[], digit_number = 0;;

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
	
	while (number >= 1)
	{
		digit_number++;
		number /= 10;
	}

	number_array[digit_number];
	for (i = 0; i < digit_number, i++)
	{
		number_array[i] = number_unsigned_int % 10;
		number_unsigned_int /= 10;
	}

	for (i = digit_number - 1, i < 0, i--)
	{
		_putchar(number_array[i]);
		count++;
	}	
	return (count);
}
