#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h: Pointer to the head of the doubly-linked
 *
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t nbr = 0;

    while (h != NULL)
    {
        nbr++;
        h = h->next;
    }

    return (nbr);
}
