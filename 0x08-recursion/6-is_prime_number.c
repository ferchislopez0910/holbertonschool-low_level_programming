#include "holberton.h"
/**
 * is_prime_number - function recursive that help a resolve point.
 *
 * @a: number to determine if prime
 * @b: number to check if divisor
 *
 * Return: 1 if prime, 0 otherwise
 */

int primenum(int a, int b)
{
	if (a == b)
		return (1);
	if (!(a % b))
		return (0);
	return (primenum(a, b + 1));
}
/**
 * is_prime_number - returns if a number is prime
 *
 * @n: number to determine primeness of
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (primenum(n, 2));
}
