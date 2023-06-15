#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a double linked list
 * @head: Pointer to the doubly linked list
 * @index: The index of the node, starting from 0
 *
 * Return: NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	current = head;

	while (count < index)
	{
		current = current->next;
		++count;
		if (current == NULL)
			return (NULL);
	}

	return (current);
}

