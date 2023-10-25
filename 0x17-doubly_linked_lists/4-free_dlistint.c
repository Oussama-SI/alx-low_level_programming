#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: A pointer to the head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur;

	while (head != NULL)
	{
		cur = head;
		head = head->next;
		free(cur);
	}
}
