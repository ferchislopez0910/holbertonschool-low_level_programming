#include "holberton.h"

/**
* _strlen- Returns the length of a string.
*
* @s: lenght
* Return: int.
*/

int _strlen(char *s)
{
	int str;

	for (str = 0; s[str] != '\0'; str++)
	;
	return (str);
}
