#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @argc: contador
 * @argv: matriz
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int cont;

	for (cont = 0; cont < argc; cont++)
	{
		printf("%s\n", argv[cont]);
	}

	return (0);
}
