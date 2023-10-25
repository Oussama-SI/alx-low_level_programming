#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: A pointer to the head of the doubly
 * @index: The index of the node.
 *
 * Return: A pointer to the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
