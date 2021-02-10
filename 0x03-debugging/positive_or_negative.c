#include <stdlib.h>
#include <stdio.h>
/**
*main - Entry point
*
*Return: 0 on success
*/
void positive_or_negative(int n){

if (n < 0)
{
printf("%d is %s\n", n, "negative");
}
else if (n == 0)
{
printf("%d is %s\n", n, "zero");
}
else
printf("%d is %s\n", n, "positive");
}

