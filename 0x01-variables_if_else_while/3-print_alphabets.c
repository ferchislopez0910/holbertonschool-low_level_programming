#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - alphABET
*
*Return: 0 on success
*/
int main(void)
{
char a = 'a';
char b = 'A';
while (a <= 'z')
{
putchar(a);
a++;
}
while (b <= 'Z')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}

