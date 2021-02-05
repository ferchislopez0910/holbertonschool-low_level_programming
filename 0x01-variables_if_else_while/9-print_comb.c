#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - print comb
*
*Return: 0 on success
*/
int main(void)
{
int i;
i = 48;
while (i < 58)
{
putchar(i);
if (i < 57)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
