#include "holberton.h"

/**
* reverse_array - function that reverses the content of an array of integers
*
* @a: arrat
* @n: is the number of elements of the array
* Return: 0.
*/

void reverse_array(int *a, int n)
{
	int i;
	int b;
	int c;

	for (b = 0,  i = n - 1; b < i; b++, i--)
	{
		c = a[b];
		a[b] = a[i];
		a[i] = c;
	}
}
