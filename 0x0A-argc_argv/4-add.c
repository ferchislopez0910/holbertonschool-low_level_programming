#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
		if (*argv[i] >= 48 && *argv[i] < 58)
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
