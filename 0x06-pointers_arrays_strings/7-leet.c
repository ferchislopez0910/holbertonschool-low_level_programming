#include "holberton.h"

/**
* leet - function that capitalizes all words of a string.
* @s: array
*
* Return: 0.
*/

char *leet(char *s)
{
	int i, j;
	char comp[] = "aAeEoOtTlL";
	char sust[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (comp[j] == s[i])
				s[i] = sust[j];
		}
	}
	return (s);
}
