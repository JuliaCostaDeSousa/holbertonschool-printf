#include "main.h"

/**
 * _printf - Custom implementation of the printf function.
 * @format: Format string containing directives for output formatting.
 *
 * Description: This function works similarly to the standard printf function.
 * It processes a format string and prints corresponding values based on
 * specifiers found within the string. The function supports the following
 * format specifiers:
 * - %c: Prints a single character.
 * - %s: Prints a string.
 * - %%: Prints a percent sign.
 * - %d, %i: Prints an integer.
 *
 * Return: The number of characters printed (excluding the null byte).
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, j = 0, count = 0, check = 0;
	printf_t specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_integer},
		{'i', print_integer},
	};

	va_start(ap, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{	
			check = 0;	
			j = 0;
			while (specifiers[j].specifier && format[i + 1])
			{
				if (specifiers[j].specifier == format[i + 1])
				{
					check = 1;
					count += specifiers[j].printf_function(ap);
					i++;
				}
				j++;
			}
			if (check == 0)
			_putchar(format[i]);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
