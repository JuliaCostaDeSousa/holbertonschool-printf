#include "main.h"

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;
	int j;
	int count = 0;
	
	va_start(ap, format);

	printf_t specifiers[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_integer},
		{"i", print_integer},
		{"%", print_percent},
		{NULL, NULL},
	};

	while (format && format[i])
	{
		j = 0;

	/*warning: comparison between pointer and integer
	*	if (format[i] == "%") 
	*/
		if (format[i] == "%")
		{
			while (specifiers[j].specifier != NULL)
			{
				/* warning: comparison with string literal results in unspecified behavior [-Waddress]
63:45: warning: comparison between pointer and integer
   63 |                 if (specifiers[j].specifier == format[i + 1])
   */
				if (specifiers[j].specifier == format[i + 1])
				{
					count += specifiers[j].printf_function(ap);
				}
				j++;
			}
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