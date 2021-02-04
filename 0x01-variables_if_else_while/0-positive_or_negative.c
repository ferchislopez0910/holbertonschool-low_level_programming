#include <stdlib.h>
#include <stdio.h>
/**
* main - Entry point
*
* Operadores condicionaltes
*/
int main(void)
{
int n;
printf("Ingresa un numero\n");
scanf("%d", &n);
if (n < 0)
{
printf("is negative\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
printf("is positive\n");
return (0);
}
