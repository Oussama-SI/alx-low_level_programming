#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
/**
 * list_len - define the number of node
 * @h: a constante pointer
 *
 * Return: the nbr of node
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
