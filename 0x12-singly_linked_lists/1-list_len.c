#include "lists.h"

/**
 * list_len - singly linked list
 * @h: ptr
 * Return: contador.
 */

size_t list_len(const list_t *h)
{
	int contador = 0;

	while (h != NULL)
	{
		h = h->next;
		contador++;
	}
	return (contador);
}
