#include "lists.h"

/**
 * print_listint - singly linked list
 * @h: ptr
 * Return: contador.
 */

size_t print_listint(const listint_t *h)
{
	int contador = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		contador++;
	}
	return (contador);
}
