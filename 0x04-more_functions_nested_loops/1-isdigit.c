#include "holberton.h"

/**
*_isdigit - check the alpha isupper.
*@c: letter
*Return: 1 or 0.
*/

int _isdigit(int c)

{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}

