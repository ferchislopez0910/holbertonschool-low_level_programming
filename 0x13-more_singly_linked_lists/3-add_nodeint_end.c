#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end list.
 * @head: node
 * @n: ptr
 * Return: head.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;

		new->n = n;
		new->next = NULL;

		return (*head);
	}
	else
	{
		listint_t *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = new;
		new->n = n;
		new->next = NULL;
	return (lastNode);
	}
}
