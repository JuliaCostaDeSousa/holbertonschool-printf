#include "main.h"

/**
 * print_percent - writes a '%' character
 * @ap: argument containing the symbol '%' to write
 * Return: length of argument to write
 */

int print_percent(__attribute__ ((unused)) va_list ap)
{
	_putchar('%');
	return (1);
}
