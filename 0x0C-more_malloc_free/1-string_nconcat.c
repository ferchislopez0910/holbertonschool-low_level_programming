#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 *
 * Return: array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int sz = 0;
	char *l;

	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}

	for (i = 0 ; s1[i] != '\0' ; i++)
	{}
	l = malloc((sz + n + 1) * sizeof(char));
	if (l == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1 && s1[i]; i++)
	{
		l[i] = s1[i];
	}
	for (j = 0; s2 && s2[j] && j < n; j++)
	{
		l[i + j] = s2[j];
	}
	l[i + n] = '\0';
	return (l);
}
