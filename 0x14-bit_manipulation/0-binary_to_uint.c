#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: ptr
 * Return: resultado.
 */

unsigned int binary_to_uint(const char *b)
{
	int resultado = 0;
	int base2 = 1;
	int contador, i;

	if (b == NULL)
		return (0);

	for (contador = 0; b[contador] != '\0'; contador++)
	{}
	i = contador - 1;

	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if ((b[i]) == '1')
		{
			resultado = resultado + base2;
		}
		base2 = (base2 * 2);
		i--;
	}
	return (resultado);
}
