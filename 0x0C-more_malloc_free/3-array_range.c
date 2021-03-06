#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers
 * @min: number min
 * @max: number max
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	for (j = min; j > max; j++)
	{
		if (min > max)
			return (NULL);
	}
	ptr = malloc((max - min + 1) * (sizeof(int)));
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
