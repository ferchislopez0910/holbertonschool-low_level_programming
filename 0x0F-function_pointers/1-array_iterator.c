#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - function that executes a function given as
* a parameter on each element of an array.
* @size: size of the array
* @array: ptr
* @action: ptr of fuction
* Return: nothing.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((action != NULL) && (array != NULL))
		for (i = 0; i < size; i++)
			action(array[i]);
}
