#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked
 * @h: ptr
 * Return: contador.
 */

size_t listint_len(const listint_t *h)
{
	int contador = 0;

	while (h != NULL)
	{
		h = h->next;
		contador++;
	}
	return (contador);
}
