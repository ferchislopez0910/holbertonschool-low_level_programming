#include "lists.h"

/**
 * free_listint2 - function that frees a list_t list.
 * @head: ptr
 * Return: contador.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
