#include "holberton.h"

/**
* string_toupper - function that reverses the content of an array of integers
* @s: arra
*
* Return: 0.
*/

char *string_toupper(char *s)
{
	int a;
	int b;


	for (a = 0; s[a] != '\0'; a++)
	{}
	for (b = 0; b < a; b++)
	{
		if (s[b] >= 'a' && s[b] <= 'z')
			s[b] -= 32;

	}
	return (s);
}
