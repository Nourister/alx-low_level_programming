#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - rees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: the address of the two dimensional grid
 * @height: the height of the array
 * Return: noting
 */

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}

	free(grid);
}
