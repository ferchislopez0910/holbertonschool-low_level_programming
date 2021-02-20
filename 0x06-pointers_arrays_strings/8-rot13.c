#include "holberton.h"

/**
* rot13 - function that encodes a string using rot13.
* @s: array
*
* Return: 0.
*/

char *rot13(char *s)
{
	int i, j;
	char comp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char comp2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (comp[j] == s[i])
			{
				s[i] = comp2[j];
				break;
			}
		}
	}
	return (s);
}
