#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Func that prints anything
 *
 * @format: string passed in
 */

void print_all(const char *const format, ...)
{
	int i = 0;
	char *str_arg;
	va_list arg_list;

	va_start(arg_list, format);

	if (!format)
		return;

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c, ", va_arg(arg_list, int));
				break;

			case 'i':
				printf("%d, ", va_arg(arg_list, int));
				break;

			case 'f':

				printf("%f, ", va_arg(arg_list, double));
				break;

			case 's':
				str_arg = va_arg(arg_list, char *);
				if (!*str_arg)
					str_arg = "(nil)";
				printf("%s, ", str_arg);
				break;

			default:
				break;
		}

		i++;
	}

	_putchar('\n');
	va_end(arg_list);
}
