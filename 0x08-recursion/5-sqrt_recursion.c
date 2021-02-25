#include "holberton.h"

/**
 * _sqrt_recursion -  function that returns the natural square.
 * @n: var
 *
 * Return: 0.
 */

int _sqrt_recursion(int n)
{
	int x = 1;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (_sqrt_compare(x, n));
}

/**
* _sqrt_compare - funcion recursiva
* @numbera: var aux
*
* @numberb: var aux
* Return: 1
*/

int _sqrt_compare(int numberb, int numbera)
{
	if ((numberb * numberb) == numbera)
		return (numberb);

	if ((numberb * numberb) > numbera)
		return (-1);

	return (_sqrt_compare(numberb + 1, numbera));
}
