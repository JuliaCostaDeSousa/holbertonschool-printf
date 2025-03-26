#include "main.h"
#include <stdarg.h>


/**
 * handle_specifier - handles character coming after '%'
 * @format: the string
 * @i: counter
 * @ap: variadic list
 *
 * Return: nombre de caractères imprimés pour ce specifier
 */
int handle_specifier(const char *format, int *i, va_list ap)
{
	int j = 0, count = 0, found = 0;

	printf_t specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_integer},
		{'i', print_integer},
		{'%', print_percent},
		{'\0', NULL}
	};

	while (specifiers[j].specifier)
	{
		if (specifiers[j].specifier == format[*i + 1])
		{
			count += specifiers[j].printf_function(ap);
			found = 1;
			break;
		}
		j++;
	}
	if (!found)
	{
		_putchar('%');
		_putchar(format[*i + 1]);
		count += 2;
	}
	*i += 2;
	return (count);
}

/**
 * _printf - Simplified printf (tâche 0)
 * @format: Format string
 *
 * Return: Number of chars printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, count = 0;

	if (!format)
		return (-1);

	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '\0')
		{
			return (-1);
		}
		else if (format[i] == '%' && format[i + 1])
			count += handle_specifier(format, &i, ap);
		else
		{
			_putchar(format[i]);
			count++;
			i++;
		}
	}
	va_end(ap);
	return (count);
}
