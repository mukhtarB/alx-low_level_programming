#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: index of value else -1 if array not found or is null
 */

int binary_search(int *array, size_t size, int value)
{
	ulong low, high, mid, i;

	if (!array || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low < high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%d%s", array[i], (i < high) ? "," : "\n");

		mid = (low + high) / 2;

		if (value == array[mid])
			return (mid);

		if (value < array[mid])
			high = mid - 1;

		else if (value > array[mid])
			low = mid + 1;
	}

	return (-1);
}
