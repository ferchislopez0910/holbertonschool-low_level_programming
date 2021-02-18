#include "holberton.h"
#include <stdio.h>

/**
* _strcpy -  function that copies the string pointed
*
* @dest: array
* @src: Text array
*
* Return: 0.
*/

char *_strcpy(char *dest, char *src)
{
	int a;
	int b;
	char c;

	for (a = 0; src[a] != '\0'; a++)
	{}
	for (b = 0; b < a; b++)
	{
		c = src[b];
		dest[b] = c;
	}
	dest[b] = '\0';
	return (dest);
}
