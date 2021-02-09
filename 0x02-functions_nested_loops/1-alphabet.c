#include "holberton.h"
/**
* print_alphabet- print alphabet on screambety
*
* Return: Always 0 (success)
*/
void print_alphabet(void)
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
_putchar(alph);
}
_putchar('\n');
}
