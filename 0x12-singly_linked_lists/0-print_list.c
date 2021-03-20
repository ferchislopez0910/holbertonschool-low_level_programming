#include "lists.h"

/**
 * print_list - singly linked list
 * @h: ptr
 * Return: contador.
 */

size_t print_list(const list_t *h)
{
	int contador = 0;


	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0](nil)\n");
			h = h->next;
		}
		else
		{
			printf("[]%u %s\n", h->len, h->str);
			h = h->next;
		}
	contador++;
	}
	return (contador);
}
