#include "lists.h"

/**
* get_dnodeint_at_index - get node
* @head: Ptr that container the node
* @index: number node
* Return: Always EXIT_SUCCESS.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i;

	if (head != NULL)
	{
		for (i = 0; i < index; i++)
		{
			if (tmp == NULL)
				return (NULL);
			tmp = tmp->next;
		}
		return (tmp);
	}
	return (NULL);
}
