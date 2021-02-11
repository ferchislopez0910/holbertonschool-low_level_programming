#include <stdio.h>
/**
 *main - multiples of 3 or 5
 *Return: 0.
 */
int main(void)
{
	int i, a;

		for (i = 0; i < 1024; i++)
			if (i % 3 == 0 || i % 5 == 0)
				a += i;

			printf("%d\n", a);
			return (0);
}
