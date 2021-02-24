#include "holberton.h"

/**
 * _pow_recursion -  function that returns the value of x pow y
 * @x: base
 *
 * @y: pow
 *
 * Return: 0, 1, -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}

	else
	return (1);

}
