#include "holberton.h"
void print_triangle(int size)

{
	int row_counter, espacios, numeral;

	row_counter = 0;
	espacios = size - 1;

	while (row_counter < size)
	{
		espacios = size - 1 - row_counter;
		numeral = row_counter + 1;
		while (espacios > 0)
		{
			_putchar(' ');
			espacios--;
		}
		while (numeral > 0)
		{
			_putchar('#');
			numeral--;
		}
		_putchar('\n');
		row_counter++;
	}
	if (size <= 0)
		_putchar('\n');
}
