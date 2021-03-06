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

	if (min > max)
		return (NULL);
	
	for (j = min + 1; j <= max; j++)
	{}
	ptr = malloc(j * (sizeof(int)));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
