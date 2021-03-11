#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters..
 * @n: parameter.
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argumen;
	unsigned int sum, add, i;

	if (n == 0)
	{
		return (0);
	}
	va_start(argumen, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		add = va_arg(argumen, unsigned int);
		sum += add;
	}
	va_end(argumen);
	return (sum);
}
