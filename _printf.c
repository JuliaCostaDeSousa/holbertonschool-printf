#include "main.h"

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;
	int j = 0;
	int count = 0;
	printf_t specifiers[] = {
		{'d', print_integer},
		{'i', print_integer},
		{'%', print_percent},
	};

	va_start(ap, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			while (specifiers[j].specifier)
			{
				if (specifiers[j].specifier == format[i + 1])
				{
					count += specifiers[j].printf_function(ap);

				}
				j++;
			}
			i++;
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