#include "lists.h"

/**
* sum_dlistint - function that sum of all the data.
* @head: Ptr that container the node
* Return: Always EXIT_SUCCESS.
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	unsigned int i;
	int sum = 0;

	if (head != NULL)
	{
		for (i = 0; tmp != NULL; i++)
		{
			sum += tmp->n;
			tmp = tmp->next;
		}
		return (sum);
	}
	return (0);
}
