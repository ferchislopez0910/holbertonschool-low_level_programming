#include "holberton.h"
/**
 * print_times_table - prints the times table for n.
 * @n: The multiplication table requested.
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i, j, a;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				a = (i * j);
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (a < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((a % 10) + '0');
				}
				else if (a >= 10 && a < 100)
				{
					_putchar(' ');
					_putchar((a / 10) + '0');
					_putchar((a % 10) + '0');
				}
				else if (a >= 100 && j != 0)
				{
					_putchar((a / 100) + '0');
					_putchar((a / 10) % 10 + '0');
					_putchar((a % 10) + '0');
				}
				else
					_putchar((a % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
