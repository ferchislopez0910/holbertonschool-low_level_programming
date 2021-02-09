#include "holberton.h"
/**
*print_sign - prints the sign of a number.
*@n: the number check
*Return: 1 is +, 0 is 0, -1 is -, if not a dig.
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('-');
return ('/');
}
}

