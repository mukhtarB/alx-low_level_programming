#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: min value.
 * @max: max value.
 *
 * Return: pointer (Success) || NULL (Error).
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (!arr)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
