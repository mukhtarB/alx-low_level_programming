#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of char intialized to a specific char
 *
 * @size: size of the array
 * @c: char to intialize array
 *
 * Return: Pointer || Null
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	ptr = malloc(size * sizeof(c));

	if (size == 0 || ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* since size is unsigned int & can't be < 0 */
	while(size--)
		*(ptr + size) = c;

	return (ptr);
}
