#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: pointer to pointer to node.
 * @idx: number of node to insert.
 * @n: value to new node.
 * Return: poninter to new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int contador = 0;
	listint_t *tmp = *head;
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (tmp)
	{
		if ((idx - 1) == contador)
		{
			node->next = tmp->next;
			tmp->next = node;

			return (node);
		}
		tmp = tmp->next;
		if (tmp == NULL)
		{
			return (NULL);
		}
		contador++;
	}
	return (0);
}
