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
	int number = va_arg(ap, int), count = 0, i = 0;
	unsigned int number_unsigned_int = number, digit_number = 0;
	char number_array[10];

	if (number < 0)
	{
		_putchar('-');
		count++;
		if (number == INT_MIN)
		number_unsigned_int = (unsigned int)INT_MAX + 1;
		else
		number_unsigned_int = number * -1;
	}
	else
	number_unsigned_int = number;
	if (number_unsigned_int == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	while (number_unsigned_int > 0)
	{
		number_array[digit_number++] = (number_unsigned_int % 10) + '0';
		number_unsigned_int /= 10;
	}

	for (i = digit_number - 1; i >= 0; i--)
	{
		_putchar(number_array[i]);
		count++;
	}	
	return (count);
}
