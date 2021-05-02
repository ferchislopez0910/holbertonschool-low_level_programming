#include "lists.h"

/**
* delete_dnodeint_at_index - delete the nodes
* @headead: Ptr
* @index: index
* Return: Always EXIT_SUCCESS.
*/
int delete_dnodeint_at_index(dlistint_t **headead, unsigned int index)
{
	dlistint_t *tmp = *headead;
	dlistint_t *new;
	unsigned int i;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{	*headead = (*headead)->next;
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
	free(new);
	return (1);
}
