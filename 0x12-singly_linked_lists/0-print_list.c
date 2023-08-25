#include <stdio.h>
#include "lists.h"
/**
 * print_list - print the element of list
 * @h: const pointer to the list
 *
 * Return: nbr of node
 */
size_t print_list(const list_t *h)
{
	size_t nbr = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		nbr++;
	}
	return (nbr);
}
