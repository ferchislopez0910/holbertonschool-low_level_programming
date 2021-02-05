#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Print comb5
*
*Return: 0 on success
*/
int main(void)
{
int i, j, k;
i = '0';
j = i + 1;
k = j + 1;
while (i <= '7')
{
while (j <= '8')
{
while (k <= '9')
{
putchar(i);
putchar(j);
putchar(k);
if (i != '7' || j != '8' || k != '9')
{
putchar(',');
putchar(' ');
}
k++;
}
j++;
k = j + 1;
}
i++;
j = i + 1;
k = j + 1;
}
putchar('\n');
return (0);
}

