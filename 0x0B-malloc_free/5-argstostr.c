#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, sz = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			sz++;
	}
	sz += ac;

	ptr = malloc(sizeof(char) * sz + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		if (ptr[k] == '\0')
		{
			ptr[k++] = '\n';
		}
	}
	return (ptr);
}
