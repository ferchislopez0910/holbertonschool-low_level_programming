#include "lists.h"

/**
 * free_listint - function that frees a list_t list.
 * @head: ptr
 * Return: contador.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;

		free(tmp);
	}
}
