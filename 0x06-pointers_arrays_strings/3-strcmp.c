#include "holberton.h"

/**
* _strcmp - function that compares two strings.
*@s1: str 1
*@s2: str 2
* Return: 0.
*/

int _strcmp(char *s1, char *s2)
{
	int a;
	int b;
	int c;

	for (b = 0; s1[b] != '\0'; b++)
	{}
	for (c = 0; s2[c] != '\0'; c++)
	{}
	for (a = 1; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] < s2[a])
			return (s1[a] - s2[a]);
	
		else
			return (s1[a] - s2[a]);
	}
	return (0);
}
