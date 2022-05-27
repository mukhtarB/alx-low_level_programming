#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings
 *
 * @separator: delimiter for strings
 * @n: number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list str_arg_ptr;

	va_start(str_arg_ptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(str_arg_ptr, char *);

		if (!str)
			str = "(nil)";

		if (separator && i != 0)
			printf("%s", separator);

		printf("%s", str);
	}

	_putchar('\n');

	va_end(str_arg_ptr);
}
