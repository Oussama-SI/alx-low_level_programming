#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: A double pointer to the head
 * @idx: The index of the list where the new node
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	tmp = *h;
	while (tmp != NULL && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = new_node;
	tmp->next = new_node;
	new_node->prev = tmp;

	return (new_node);
}
