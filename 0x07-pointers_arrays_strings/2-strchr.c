#include "holberton.h"

/**
* _strchr - function that locates a character in a string.
*@c: caracter a buscar en la matriz.
*:
*@s: cadena que va a escanear
* Return: 0.
*/

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0' ; a++)
	{
		if (s[a] == c)
		
			return (s + 2);

		else if (!*s)
			return ('\0');
		
	}
	return ('\0');
}
