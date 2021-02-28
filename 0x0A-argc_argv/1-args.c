#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @argc: contador
 * @argv: matriz
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argv[0] != '\0')
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
