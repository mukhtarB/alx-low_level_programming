#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in a
 * sorted array of integers using the Jump search algorithm.
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index of value else -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t blocksize, end, i, start;

	if (array == NULL)
		return (-1);

	blocksize = (size_t)sqrt((double)size);
	start = 0;
	end = blocksize;

	while ((array[end] <= value) && (end < size))
	{
		printf("Value cheacked array [%lu] = [%lu]\n", end, end);
		start = end;
		end = end + blocksize;

		if (end > size - 1)
			end = size;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	for (i = start; i <= end - 1; i++)
	{
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
