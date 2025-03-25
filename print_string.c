#include "main.h"

/**
 * print_string - Prints a string from a variadic argument
 * @ap: Argument list containing the string to print
 *
 * Return: Number of characters printed
 */
int print_string(va_list ap)
{
	char *str;
	int i = 0;
	int j = 0;
	char *null_str = "(null)";

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		while (null_str[j])
		{
			putchar(null_str[j]);
			j++;
		}
		return (j);
	}
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	return (i);
}
