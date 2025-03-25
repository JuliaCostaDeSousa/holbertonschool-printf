#include "main.h"

int print_integer(va_list ap)
{
	int number = va_arg(ap, int);
	int count = 0;

	if (number < 0)
	{
		_putchar('-');
		count++;
	}
	while (number % 10 >= 0)
	{
		_putchar(number % 10 + '0');
		number = 
		count++;
	}
	return (count);
}
