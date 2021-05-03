#include "lists.h"

/**
* delete_dnodeint_at_index - delete the nodes
* @head: Ptr
* @index: index
* Return: Always EXIT_SUCCESS.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	dlistint_t *new;
	dlistint_t *ant;
	unsigned int i;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{	*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	new = tmp->next;
	tmp->next = new->next;
	ant = tmp->prev;
	ant->next = tmp;
	free(new);
	return (1);
}
