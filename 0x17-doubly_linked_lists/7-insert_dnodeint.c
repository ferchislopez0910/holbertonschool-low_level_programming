#include "lists.h"
/**
* insert_dnodeint_at_index - function that sum of all the data.
* @h: Ptr that container the node
* @idx: index
* @n: number nodes
* Return: Always EXIT_SUCCESS.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new, *auxnew;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*h == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->n = n;
		new->next = tmp->next;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	else
	{
		for (i = 0; i < idx; i++)
		{
			if (tmp == NULL)
				return (NULL);
			tmp = tmp->next;
		}
		new->n = n;
		new->prev = tmp->prev;
		new->next = tmp;
		tmp->prev = new;
		auxnew = new->prev;
		auxnew->next = new;
		return (new);
	}
	return (NULL);
}
