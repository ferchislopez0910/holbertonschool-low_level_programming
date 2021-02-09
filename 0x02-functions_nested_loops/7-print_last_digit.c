#include "holberton.h"
/**
*print_last_digit - prints the last digit of a number.
*@n: integre converted
* Return: l
*/

int print_last_digit(int n)
{
int l, b;
l = n % 10;
if (l <  0)
l = -l;
b = '0' + l;
_putchar(b);
return (l);
}
