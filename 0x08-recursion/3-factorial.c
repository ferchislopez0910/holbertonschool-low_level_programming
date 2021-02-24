#include "holberton.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: number of string
 * Return: 0, 1, -1.
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
