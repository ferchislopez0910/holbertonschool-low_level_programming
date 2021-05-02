#include "lists.h"

/**
 * free_dlistint - function that frees a list_t list.
 * @head: ptr
 * Return: contador.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempo;

	while (head != NULL)
	{
		tempo = head;
		head = head->next;
		free(tempo);
	}
}
