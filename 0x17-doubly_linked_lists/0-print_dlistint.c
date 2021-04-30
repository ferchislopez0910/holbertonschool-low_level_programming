#include "lists.h"
/**
* print_dlistint- singly linked list
* @h: ptr
* Return: number_nodos.
*/

size_t print_dlistint(const dlistint_t *h)
{
	int number_nodos = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	number_nodos++;

	return (number_nodos);
}
