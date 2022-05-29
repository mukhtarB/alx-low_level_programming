#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - create 2d matrix of array of int
 * @width: width of matrix
 * @height: heeight of matrix
 *
 * Return: Pointer to 2d matrix arr (success) || NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int ndx_i, ndx_j;
	int **outer_arr;

	/* malloc outer arr */
	/* NB: height is size of outer arr, width is size of inner */
	outer_arr = malloc(sizeof(*outer_arr) * height);

	/* constraints */
	if (width < 1 || height < 1 || !outer_arr)
		return (NULL);

	/* loop through outer arr & allocate mem for it's elements (inner arr) */
	for (ndx_i = 0; ndx_i < height; ndx_i++)
	{
		outer_arr[ndx_i] = (int *) malloc(sizeof(**outer_arr) * width);

		/* error handling on malloc: free both 1d & 2d arrs */
		if (!outer_arr)
		{
			/* loop through outer arr to free both current iteration and all before */
			while (i--)
				free(outer_arr[ndx_i]);
			free(outer_arr);
			return (NULL);
		}

		/* if !NULL: execute */
		for (ndx_j = 0; ndx_j < width; ndx_j++)
			outer_arr[ndx_i][ndx_j] = 0; /* init to 0 */
	}

	return (outer_arr);
}
