#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int dig(char *n);
/**
 * main - check the code for Holberton School students.
 * @argc: contador
 * @argv: matriz
 * Return: 0, 1, Error.
 */

int main(int argc, char *argv[])
{
	int sum, i = 1;

	if (argc < 2)
	{}
	while (i < argc)
	{
		if (dig(argv[i]))
		{
			sum = sum + atoi(argv[i]);
		}
		else 
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * dig - check the code for Holberton School students.
 * @n: str
 * Return: 0, 1, Error.
 */

int dig(char *n)
{
	int a = 0;

	while (n[a] != '\0')
	{
		if(isdigit(n[a]))
		{
			a++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
