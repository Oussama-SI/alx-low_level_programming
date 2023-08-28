#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function to free up
 * @head: the node of the list to freed
 */
void free_list(list_t *head)
{
	list_t *abs;

	while (head)
	{
		abs = head->next;
		free(head->str);
		free(head);
		head = abs;
	}
}
