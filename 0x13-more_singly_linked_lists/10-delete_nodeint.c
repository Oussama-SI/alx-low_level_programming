#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @head: pointer to the pointer of the header
 * @index: index of deleted node
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *p = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	p = temp->next;
	temp->next = p->next;
	free(p);

	return (1);
}
