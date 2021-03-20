#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: node
 * @str: ptr
 * Return: head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int contador;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	for (contador = 0; str[contador] != '\0'; contador++)
	{}
	if (*head == NULL)
	{
		*head = new;

		new->str = strdup(str);
		new->len = contador;
		new->next = NULL;

		return (*head);
	}

	else
	{
		list_t *lastNode = *head;

		while (lastNode->next != NULL)
			lastNode = lastNode->next;

		lastNode->next = new;
		new->str = strdup(str);
		new->len = contador;
		new->next = NULL;
	return (lastNode);
	}
}
