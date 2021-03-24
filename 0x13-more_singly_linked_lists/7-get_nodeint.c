#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a
 *
 * listint_t linked list..
 * @index: contador
 * @head: ptr
 * Return: contador.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;

	if (head != NULL)
	{
		for (; index > 0; index--)
		{
			if (tmp == NULL)
			{
				return (NULL);
			}
			tmp = tmp->next;
		}
		return (tmp);
	}
	return (NULL);
}
