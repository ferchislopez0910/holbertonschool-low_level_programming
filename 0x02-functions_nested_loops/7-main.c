#include "holberton.h"
/**
*  main - check the code for Holberton School students.
* print_last_digit: value of the last digit
* Return: Always 0.
*/
int  main(void)
{
int r;
print_last_digit(98);
print_last_digit(0);
r = print_last_digit(-1024);
_putchar('0' + r);
_putchar('\n');
return (0);
}

