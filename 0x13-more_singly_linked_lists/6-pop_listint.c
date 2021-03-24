#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t.
 * @head: ptr
 * Return: contador.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int var_guarda;

	if (head && *head == NULL)
		return (0);

	while (head != NULL && *head)
	{
		tmp = (*head)->next;
		var_guarda = (*head)->n;
		free(*head);
		*head = tmp;
	}
	return (var_guarda);
}
