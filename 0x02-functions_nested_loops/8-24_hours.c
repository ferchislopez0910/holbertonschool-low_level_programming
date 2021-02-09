#include "holberton.h"
/**
*jack_bauer - prints every minute of the day
*
*Return: l
*/

void jack_bauer(void)
{
	int h, m, a, b, c, l;

	for (h = 0; h < 24; h++)
	{
		a = h / 10;
		b = h % 10;
		for (m = 0; m < 60; m++)
		{
			c = m / 10;
			l = m % 10;
			_putchar('0' + a);
			_putchar('0' + b);
			_putchar(':');
			_putchar('0' + c);
			_putchar('0' + l);
			_putchar('\n');
		}
	}
}
