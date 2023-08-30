#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - reverses a list
 * @head: pointer to the pointer of first node in the list
 *
 * Return: pointer to the node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = new;
	}

	*head = p;

	return (*head);
}
