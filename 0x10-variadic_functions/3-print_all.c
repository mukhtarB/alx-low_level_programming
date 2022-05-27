#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Func that prints anything
 *
 * @separator: delimiter for strings
 * @n: number of strings passed
 */

void print_all(const char *const format, ...)
{
	int i;
	char *str_arg;
	va_list arg_list;

	va_start(arg_list, format);

	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				_putchar(va_arg(arg_list, int));
				_putchar('\n');
				break;

			case 'i':
				printf("%d\n", va_arg(arg_list, int));
				break;

			case 'f':
				printf("%f\n", va_arg(arg_list, double));
				break;

			case 's':
				str_arg = va_arg(arg_list, char *);

				if (!*str_arg)
					str_arg = "(nil)";

				printf("%s\n", str_arg);
				break;

			default:
				break;
		}

		i++;
	}

	_putchar('\n');
	va_end(arg_list);
}
