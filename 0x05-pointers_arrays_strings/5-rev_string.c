#include "holberton.h"

/**
* rev_string - actualizar el arreglo de forma inversa.
*
* @s: its a ptr
*
* Return: 0.
*/

void rev_string(char *s)
{
	int a = 0;
	int b;
	char c;

	while (s[a] != '\0')
	{
		a++;
	}
	for (b = 0,  a = a - 1; b < a; b++, a--)
	{
		c = s[b];
		s[b] = s[a];
		s[a] = c;
	}
}
