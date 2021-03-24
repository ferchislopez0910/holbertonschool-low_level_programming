#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the data.
 * @head: ptr
 * Return: contador.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		head = head->next;
		sum = sum + head->n;
	}
	return (sum);
}
