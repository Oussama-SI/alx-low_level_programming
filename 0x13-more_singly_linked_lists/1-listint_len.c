#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - return the number of nodes
 * @h: a pointer to every node
 * Return: nbr of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
