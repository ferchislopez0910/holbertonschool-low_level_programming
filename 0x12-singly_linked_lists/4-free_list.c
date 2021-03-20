#include "lists.h"

/**
 * free_list - unction that frees a list_t list.
 * @head: ptr
 * Return: contador.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		if (tmp->str != NULL)
		{
			free(tmp->str);
		}
		free(tmp);
	}
}
