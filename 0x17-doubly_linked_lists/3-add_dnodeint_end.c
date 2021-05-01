#include "lists.h"

/**
* add_dnodeint_end - function that adds a new node at the end
* of a list_t list.
* @n: node
* @head: ptr
* Return: new node.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tempo;

	int i = 0;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	else
	{
	    tempo = *head;
		while (tempo->next != NULL)
		{
			tempo = tempo->next;
			i++;
		}
		new->n = n;
		new->next = NULL;
		tempo->next = new;
		new->prev = tempo;
		return (new);
	}
}
