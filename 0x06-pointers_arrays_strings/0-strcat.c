#include "holberton.h"

/**
* _strcat - function that concatenates two strings.
*
* @dest: destino
* @src: source
*
* Return: 0.
*/

char *_strcat(char *dest, char *src)
{
	int a;

	for (a = 0; dest[a] != '\0'; a++)
	{}

	while (*(src))
	{
		*(dest + a) = *(src);
		a++;
		src++;
	}
	return (dest);
}
