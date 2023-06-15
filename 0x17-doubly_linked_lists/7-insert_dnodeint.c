#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the doubly linked list
 * @idx: Index of the list where the new node should be added
 * @n: Value to be inserted
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	current = *h;
	for (i = 0; current && i < idx; i++)
		current = current->next;

	if (i != idx)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		new_node->next = current;
		new_node->prev = current->prev;
		current->prev->next = new_node;
		current->prev = new_node;
	}

	return (new_node);
}

