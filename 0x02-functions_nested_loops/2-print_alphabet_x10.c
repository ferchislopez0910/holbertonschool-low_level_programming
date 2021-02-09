#include "holberton.h"
/**
* print_alphabet_x10- repeat print_alphabet x10
*
* Return: 0
*/
void print_alphabet_x10(void)
{
int i;
char alph;

for (i = 0; i < 10; i++)
{
for (alph = 'a'; alph <= 'z'; alph++)
{
_putchar(alph);
}
_putchar('\n');
}
}
