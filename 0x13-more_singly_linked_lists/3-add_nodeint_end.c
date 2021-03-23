#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a listint_t list.
 * @head: node
 * @str: ptr
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
		new->next = *head;

		return (*head);
	}

	else
	{
		listint_t *lastNode = *head;

		while (lastNode->next != NULL)
			lastNode = lastNode->next;

		lastNode->next = new;
		new->n = n;
		new->next = *head;
		*head = new;;
	return (lastNode);
	}
}
