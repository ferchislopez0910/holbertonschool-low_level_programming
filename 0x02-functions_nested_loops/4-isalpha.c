#include "holberton.h"
/**
*_isalpha - checks for alphabetic character.
*@c: character one lettre
*Return: 1 if int c is lowercase, 0 if otherwise
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'Z' && c <= 'Z'))
return (1);
else
return (0);
}

