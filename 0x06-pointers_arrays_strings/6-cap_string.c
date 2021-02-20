#include "holberton.h"

/**
* cap_string - function that capitalizes all words of a string.
* @s: arra
*
* Return: 0.
*/

char *cap_string(char *s)
{
	int a;
	int b;
	int j;
	char sep[] = " \t\n,;.!?\"(){}";

	for (a = 0; s[a] != '\0'; a++)
	{}
	for (b = 0; b < a; b++)
	{
		if (s[b] >= 'a' && s[b] <= 'z')
		{
			if (b == 0)
				s[b] -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (sep[j] == s[b - 1])
						s[b] -= 'a' - 'A';
				}
			}
		}

	}
	return (s);
}
