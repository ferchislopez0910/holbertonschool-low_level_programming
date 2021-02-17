#include "holberton.h"

/**
* _puts - Write a function that prints a string
*
* @str: its a ptr
* Return: 0.
*/

void _puts(char *str)
{
	int a;

	a = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
		_putchar('\n');
}
