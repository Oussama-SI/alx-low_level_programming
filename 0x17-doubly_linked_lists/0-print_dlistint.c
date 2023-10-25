#include "lists.h"

/**
 * print_dlistint - prints all the elements
 * @h: Pointer to the head of the doubly-linked
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t nbr = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        nbr++;
    }

    return (nbr);
}
