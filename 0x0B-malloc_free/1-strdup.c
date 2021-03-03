#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strlen - function that returns a pointer to a newly
* @str: string
* Return: str copy
**/
int  _strlen(char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
	{
	}
	return (a);
}
/**
* _strdup - copy an string
* @str: pointer char type
* Return: String copied
**/
char *_strdup(char *str)
{
	char *ptr;
	int j;
	int k;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		j = _strlen(str);
		ptr = (char *)malloc(j *sizeof(char) + 1);
		for (k = 0; str[k] != '\0'; k++)
		{
			ptr[k] = str[k];
		}
		if (ptr == NULL)
		{
			return (0);
		}
		return (ptr);
	}
	free(ptr);
}
