#include "holberton.h"

/**
* puts_half -  function that prints half of a string, followed by a new line.
*
* @str: its a ptr
*
* Return: 0.
*/

void puts_half(char *str)
{
	int a;
	int b;

	for (a = 0; str[a] != '\0'; a++)
	{}
	for (b = 0; b < a / 2; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
