#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct printf - Structure to map a format specifier
 *                 to its corresponding printf function.
 * @specifier: String representing the format specifier (e.g. "d", "s")
 * @printf_function: Pointer to the function that handles the specifier
 */
typedef struct printf
{
	char specifier;
	int (*printf_function)(va_list ap);
} printf_t;

int _printf(const char *format, ...);
int print_char(va_list ap);
int print_string(va_list ap);
int print_integer(va_list ap);
int print_percent(va_list ap);
int _putchar(char c);
#endif
