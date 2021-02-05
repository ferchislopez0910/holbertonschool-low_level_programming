#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Hexadecimal
*
*Return: 0 on success
*/
int main(void)
{
int n;
char a;
for (n = 48; n < 58; n++)
putchar(n);
for (a = 'a'; a < 'g'; a++)
putchar(a);
putchar('\n');
return (0);
}

