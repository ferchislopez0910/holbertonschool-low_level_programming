#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - function that searches for an integer.
* a parameter on each element of an array.
* @size: size of the array
* @array: ptr
* @cmp: ptr of fuction
* Return: nothing.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((array != NULL) && (cmp != NULL))
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	else if (size <= 0)
	{
		return (-1);
	}
	return (-1);
}
