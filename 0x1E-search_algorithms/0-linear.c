#include "search_algos.h"
/**
 * lWrite a function that searches for a value in an array 
 * of integers using the Linear search algorithmthm
 * @array: pointer of first element of the array to search
 * @size: size
 * @value:  value to search
 * Return: number or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t iter;
	int aux;

	if (array != NULL)
	{
		for (iter = 0; iter < size; iter++)
		{
			aux = array[iter];
			printf("Value checked array[%lu] = [%d]\n", iter, aux);
			if (aux == value)
				return (iter);
		}
	}
	return (-1);
}
