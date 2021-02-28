#include "holberton.h"

/**
*_isupper - check the alpha isupper.
*@c: letter
*Return: 1 or 0.
*/

int _isupper(int c)

{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
