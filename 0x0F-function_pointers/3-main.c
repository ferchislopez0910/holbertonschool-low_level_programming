#include "3-calc.h"

/**
 * main - function
 * @argc: argument cont
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int salida;
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	salida = f(a, b);
	printf("%d\n", salida);
	return (0);
}
