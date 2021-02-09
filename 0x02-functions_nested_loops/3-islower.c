#include "holberton.h"
/**
*_islower - These functions check whether
*@c: character one lettre
*Return: 1 if int c is lowercase, 0 if otherwise
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

