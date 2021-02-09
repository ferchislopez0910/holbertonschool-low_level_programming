#include "holberton.h"
/**
*_isalpha - checks for alphabetic .
*@c: character
*Return: 1 if c is a letter, lowercase or upper, 0 if otherwise
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}

