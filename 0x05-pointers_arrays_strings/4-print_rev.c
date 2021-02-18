#include "holberton.h"

/**
* print_rev - ffunction that prints a string, in reverse.
*
* @s: its a ptr
* Return: 0.
*/

void print_rev(char *s)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		a++;
	}
	for (b = a - 1; b >= 0; b--)
		{
		_putchar(s[b]);
	}
		_putchar('\n');
}
