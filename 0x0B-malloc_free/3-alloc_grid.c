#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: A pointer to be allocated grid
 */

int **alloc_grid(int width, int height)
{
	int **to_grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	else
	{
		to_grid = malloc(height * sizeof(int *));
		if (to_grid == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			to_grid[i] = malloc(width * sizeof(int));
			if (to_grid[i] == NULL)
			{
				while (i >= 0)
				{
					free(to_grid[i]);
					i--;
				}
				free(to_grid);
				return (NULL);
			}

			for (j = 0; j < width; j++)
			{
				to_grid[i][j] = 0;
			}
		}
	}
	return (to_grid);
}
