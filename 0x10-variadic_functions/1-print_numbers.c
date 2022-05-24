#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers seperated by a delimiter
 *
 * @separator: string to be used as separator between numbers
 * @n: no of int passed to the func
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list var_arg_ptr;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(var_arg_ptr, n);

	for (i = 0; i < n; i++)
		printf("%d%s", va_arg(var_arg_ptr, int), separator);

	_putchar('\n');
	va_end(var_arg_ptr);
}
