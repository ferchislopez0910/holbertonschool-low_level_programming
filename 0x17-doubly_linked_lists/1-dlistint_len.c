#include "lists.h"

/**
 * dlistint_len -  function that prints all the elements of a dlistint_t list.
 * @h: ptr
 * Return: number_nodos.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int number_nodos = 0;

	while (h != NULL)
	{
		h = h->next;
		number_nodos++;
	}
	return (number_nodos);
}
