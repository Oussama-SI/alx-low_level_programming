#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - to delete the head
 * @head: th first node
 * Return: the data of head
 */
int pop_listint(listint_t **head)
{
	int a;
	listint_t *rm;

	if ((*head)->next == NULL)
		return (0);

	a = (*head)->n;
	rm = (*head)->next;
	free(*head);
	*head = rm;

	return (a);

}
