#include "holberton.h"

/**
* _strncat - function that concatenates two strings.
*
* @dest: destino
* @src: source
* @n: espacio requerido
* Return: 0.
*/

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{}

	for (b = 0; b < n && src[b] != '\0';)
	{
		*(dest + a) = *(src + b);
		a++;
		b++;
	}
	return (dest);
}
