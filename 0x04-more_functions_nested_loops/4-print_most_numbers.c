#include "holberton.h"
#include <unistd.h>

/**
* void print_most_numbers - product of 2 numbers.
*
* return 0
*/

void print_most_numbers(void)
{
	int a;
for (a = '0'; a <= '9' ; a++)
	if (a != '2' && a != '4')
		break;
{
_putchar(a);
}
_putchar('\n');
}
