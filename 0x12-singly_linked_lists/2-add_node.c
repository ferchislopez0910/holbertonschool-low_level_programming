#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: node
 * @str: ptr
 * Return: head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int contador;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	return (NULL);

	for (contador = 0; str[contador] != '\0'; contador++)
{}
	new->str = strdup(str);
	new->len = contador;
	new->next = *head;
	*head = new;

	return (*head);
}
