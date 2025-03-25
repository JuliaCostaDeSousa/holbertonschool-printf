#include "main.h"

/**
 * print_percent - Prints a '%' character to the standard output.
 * @ap: Unused variadic argument (required for function prototype consistency).
 *
 * Description: This function simply prints the '%' character.
 * It is used when encountering "%%" in the format string of `_printf`.
 * The `__attribute__((unused))` specifier prevents compiler warnings
 * about the unused `ap` parameter.
 *
 * Return: Always returns 1 (one character printed).
 */

int print_percent(__attribute__ ((unused)) va_list ap)
{
	_putchar('%');
	return (1);
}
