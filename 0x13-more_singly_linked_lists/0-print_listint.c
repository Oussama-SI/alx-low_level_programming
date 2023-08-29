#include "lists.h"
/**
 * print_listint - to print the containe of list
 * @h: pointer to every node
 *
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t nbr = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nbr++;
		h = h->next;
	}
	return (nbr);
}
