#include "holberton.h"
#include <stdio.h>

/**
* print_array -  function that prints n elements of an array of integers
*
* @a: array
* @n: number array
*
* Return: 0.
*/

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b < n - 1)
			printf(", ");
	}
	printf("\n");
}
