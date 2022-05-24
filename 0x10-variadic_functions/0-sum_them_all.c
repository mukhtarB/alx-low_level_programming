#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that sums all int arguements given
 * @n: no of integers to sum
 *
 * Return: an integer representing sum of numbers of n
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg_ptr;

	unsigned int i, sum = 0;

	va_start(arg_ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg_ptr, int);

	va_end(arg_ptr);
	return (sum);
}
