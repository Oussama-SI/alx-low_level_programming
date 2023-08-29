#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - a pointer function to the new node
 * @head: pointer to the pointer of the first node
 * @n: data of the new node
 * Return: the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(head));
	p->n = n;
	p->next = *head;
	*head = p;

	return (p);
}
