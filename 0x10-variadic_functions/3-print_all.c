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
	char *str_arg, *sep = "";
	va_list arg_list;

	va_start(arg_list, format);

	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(arg_list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(arg_list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(arg_list, double));
					break;
				case 's':
					str_arg = va_arg(arg_list, char *);
					!str_arg ? printf("%s(nil)", sep) : printf("%s%s", sep, str_arg);
					break;
				default:
					i++;
					continue;
			}

			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(arg_list);
}
