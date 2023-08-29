#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(tmp);
		head = head->next;
	}
}
