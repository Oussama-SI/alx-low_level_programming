#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node
 * @head: Pointer to the pointer of the head
 * @idx: Index where the new node
 * @n: data of  the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *p;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	p = *head;
	while (p != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = p->next;
			p->next = new_node;
			return (new_node);
		}

		count++;
		p = p->next;
	}

	free(new_node);
	return (NULL);
}
