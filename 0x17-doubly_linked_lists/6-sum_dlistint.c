#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data
 * @head: A pointer to the head of the doubly-linked list.
 *
 * Return: The sum of all data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
