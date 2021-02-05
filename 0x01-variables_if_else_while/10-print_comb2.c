#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - 00...99
*
*Return: 0 on success
*/
int main(void)
{
int a, b;
for (a = b = 48; a < 58; a++)
{
while (b < 58)
{
putchar(a);
putchar(b);
if ((a + b) != 114)
{
putchar(',');
putchar(' ');
}
b++;
}
b = 48;
}
putchar('\n');
return (0);
}

