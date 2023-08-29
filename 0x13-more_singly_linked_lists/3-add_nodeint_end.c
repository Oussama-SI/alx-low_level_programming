#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add a node in the end
 * @head: a pointer to the pointer of the head
 * @n: data of the node
 * Return: the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *N_node = *head;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = NULL;

	if (*head == NULL)
	{
		*head = p;
		return (p);
	}

	while (N_node->next)
		N_node = N_node->next;

	N_node->next = p;

	return (p);
}
