#include "main.h"

/*

*/
int print_char(va_list ap)
{
	_putchar(va_arg(ap, int) + '0');
	return (1);
}