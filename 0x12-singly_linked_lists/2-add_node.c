#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - a function to add front element
 * @head: the head of the list
 * @str: data of the new added
 *
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = 0;
	while (str[new->len])
		new->len++;

	new->next = *head;
	*head = new;

	return (new);
}
