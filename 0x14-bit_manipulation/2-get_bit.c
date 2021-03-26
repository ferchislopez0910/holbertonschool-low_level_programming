#include "holberton.h"
/**
 * get_bit -  function that returns the value of a bit at a given index.
 * @n: number
 * @index: number
 * Return: 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);

	if (index != '0' && index != '1')
		return (-1);
}

