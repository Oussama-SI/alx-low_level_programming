#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Adds a new node at the end
 * @head: Pointer to a pointer
 * @str: the date of a node
 *
 * Return: The address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end;

	if (str == NULL)
		return (NULL);

	new_end = malloc(sizeof(list_t));
	if (new_end == NULL)
		return (NULL);

	new_end->str = strdup(str);
	if (new_end->str == NULL)
	{
		free(new_end);
		return (NULL);
	}

	new_end->len = 0;
	while (str[new_end->len])
		new_end->len++;

	new_end->next = NULL;

	if (*head == NULL)
		*head = new_end;
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_end;
	}

	return (new_end);
}
