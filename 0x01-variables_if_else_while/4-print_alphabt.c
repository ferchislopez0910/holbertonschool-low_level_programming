#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - SoupLetters
*
*Return: 0 on success
*/
int main(void)
{
char a = 'a';
while (a <= 'z')
{
if (a != 'q' && a != 'e')
{
putchar(a);
}
a++;
}
putchar('\n');
return (0);
}

