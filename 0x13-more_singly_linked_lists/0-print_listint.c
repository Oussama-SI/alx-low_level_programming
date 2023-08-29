#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - to print the containe of list
 * @h: pointer to every node
 *
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t nbr = 0;

	tmp = h;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		nbr++;
		tmp = tmp->next;
	}
	return (nbr);
}
