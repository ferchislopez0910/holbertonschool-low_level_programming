#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - function that concatenates two strings.
*
* @s1: destino
* @s2: source
*
* Return: 0.
*/

char *str_concat(char *s1, char *s2)
{
	char *l;
	int i, j, k, m;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0 ; s1[i] != '\0' ; i++)
	{}
	for (j = 0 ; s2[j] != '\0' ; j++)
	{}
	k = (i + j + 1);
	l =  malloc(k * sizeof(char));

	if (l == NULL)
	{
		return (0);
	}

	for (m = 0; s1[m] != '\0'; m++)
	{
		l[m] = s1[m];
	}
	for (m = 0; s2[m] != '\0'; m++, i++)
	{
		l[i] = s2[m];
	}
		return (l);
	}
