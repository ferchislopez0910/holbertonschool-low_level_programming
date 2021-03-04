#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **mat;

	if (width <= 0)
	{
		return (NULL);
	}

	if (height <= 0)
	{
		return (NULL);
	}

	mat = malloc(height * sizeof(int *));
	if (mat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height ; i++)
	{
		mat[i] = malloc(width * sizeof(int));
		if (mat[i] == NULL)
		{
			return (NULL);
			free(mat[i]);
		free(mat);
		}
	}

	for (i = 0; i < height ; i++)
	{
		for (j = 0; j < width ; j++)
		{
			mat[i][j] = 0;
		}
	}
	return (mat);
}
