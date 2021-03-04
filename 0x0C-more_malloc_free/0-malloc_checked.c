#include <stdlib.h>
#include "holberton.h"
/**
* malloc_checked -  function that allocates memory using 
* @b: unisigned integer
* Return: str.
*/
void *malloc_checked(unsigned int b)
{
	void *str = malloc(b);

	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
