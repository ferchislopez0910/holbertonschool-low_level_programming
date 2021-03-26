#include "holberton.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number
 * Return: resultado.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)

	print_binary(n >>  1);

	_putchar((n & 1) ? '1' : '0');
}
