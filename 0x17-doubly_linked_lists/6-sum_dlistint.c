#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t linked list
 * @head: Pointer to the doubly linked list
 *
 * Return: 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

