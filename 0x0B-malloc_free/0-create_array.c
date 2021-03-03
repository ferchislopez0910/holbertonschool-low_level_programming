#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: the size of the memory to print
 * @c: bytes
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	unsigned int n;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		ptr = (char *)malloc(size * sizeof(char));
		if (ptr != NULL)
		{
			for (n = 0; n < size; n++)
				ptr[n] = c;
		}
	}
	return (ptr);
}
