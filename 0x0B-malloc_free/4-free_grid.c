#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Matrix grid to clear memory on
 * @grid: 2d matrix array of integers
 * @height: size of outer array and height of matrix
 */

void free_grid(int **grid, int height)
{
	int ndx_i;

	for (ndx_i = 0; ndx_i < height; ndx_i++)
	{
		free(grid[ndx_i]);
	}
	free(grid);
}
