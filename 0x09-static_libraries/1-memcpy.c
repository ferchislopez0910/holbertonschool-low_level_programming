#include "holberton.h"

/**
* _memcpy - function that copies memory area.
*@n: número de bytes que se copiarán.
*@dest: matriz destino
*@src: es un puntero al origen de los datos que se copiarán
* Return: 0.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	unsigned int i;

	for (a = 0; src[a] != '\0' ; a++)

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
