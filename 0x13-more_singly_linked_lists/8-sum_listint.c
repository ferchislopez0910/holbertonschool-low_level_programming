#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the data.
 * @head: ptr
 * Return: contador.
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	else{
		while (head->next != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
		sum = sum + head->n;
	return (sum);
	}
}
