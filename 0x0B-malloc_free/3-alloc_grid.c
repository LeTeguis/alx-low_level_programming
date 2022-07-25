#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - alloc a 2D array
 *
 * @width: width of array
 * @height: height of array
 *
 * Description: deermine a pointer to a 2
 * dimensional array of integers
 *
 * Return: return a array
 */

int **alloc_grid(int width, int height)
{
	int **array2D = 0;
	int i = 0;
	int j = 0;

	if (width > 0 && height > 0)
	{
		array2D = (int **)malloc(sizeof(int *) * height);
		if (array2D)
		{
			for (j = 0; j < height; j++)
			{
				array2D[j] = (int *)malloc(sizeof(int) * width);
				if (*array2D)
				{
					for (i = 0; i < width; i++)
						array2D[j][i] = 0;
				}
				else
				{
					for (i = 0; i < j; i++)
						free(array2D[i]);
					free(array2D);
					return (0);
				}
			}
		}
		else
			return (0);
	}
	return (array2D);
}
