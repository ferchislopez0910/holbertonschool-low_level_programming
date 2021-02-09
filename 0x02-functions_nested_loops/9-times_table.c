#include "holberton.h"
/**
*times_table - prints the times table
*
*Return: 0
*/

void times_table(void)
{
int i, j, a, b, c;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
a = i * j;
b = a / 10;
c = a % 10;
if (j == 0)
_putchar('0');
else if (a < 10)
{
_putchar(' ');
_putchar('0' + c);
}
else
{
_putchar('0' + b);
_putchar('0' + c);
}
if (j < 9)
			{
_putchar(',');
_putchar(' ');
}
else
_putchar('\n');
}
}
}
