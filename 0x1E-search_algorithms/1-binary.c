#include "search_algos.h"

/**
 * binary_search -  function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value:  is the value to search
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	size_t iter, izq, der;

	if (array == NULL)
		return (-1);

	for (izq = 0, der = size - 1; der >= izq;)
	{
		printf("Searching in array: ");
		for (iter = izq; iter < der; iter++)
			printf("%d, ", array[iter]);
		printf("%d\n", array[iter]);

		iter = izq + (der - izq) / 2;
		if (array[iter] == value)
			return (iter);
		if (array[iter] > value)
			der = iter - 1;
		else
			izq = iter + 1;
	}

	return (-1);
}
