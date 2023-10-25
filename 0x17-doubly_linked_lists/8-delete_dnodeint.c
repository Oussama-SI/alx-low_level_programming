#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index.
 * @head: A double pointer to the head
 * @index: The index of the node to delet
 *
 * Return: if it succeeded or failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *previous;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && i < index)
	{
		previous = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	previous->next = current->next;
	if (current->next != NULL)
		current->next->prev = previous;
	free(current);

	return (1);
}
