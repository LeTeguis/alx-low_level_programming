#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free grid
 *
 * @grid: grid array
 * @height: height of grid
 *
 * Description: frees a 2 dimensional grid previously
 * created by your alloc_grid function
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
			grid[i] = 0;
		}
		free(grid);
		grid = 0;
	}
}
