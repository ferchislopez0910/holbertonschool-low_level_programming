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
	int mit = 0;

	for (a = 0; str[a] != '\0'; a++)
	{}
	if (a % 2 == 0)
	{
		mit = a / 2;
	}
	else
		mit = (a / 2) + 1;

	for (b = mit; b < a; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
