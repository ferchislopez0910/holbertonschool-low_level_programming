#include <stdio.h>
/**
* main - print the first 50 fibonacci numbers.
* Return: 0.
*/

int main(void)

{
long int i, t1 = 1, t2 = 2, rest;

for (i = 1; i < 50; ++i)
{
printf("%lu, ", t1);
rest = t1 + t2;
t1 = t2;
t2 = rest;
}
{
printf("\n");
}
return (0);
}
