#include "main.h"

/**
 * print_char - Prints a character from a variadic argument
 * @ap: Argument list containing the character to print
 *
 * Return: Number of characters printed (always 1)
 */
int print_char(va_list ap)
{
	_putchar(va_arg(ap, int) + '0');
	return (1);
}
