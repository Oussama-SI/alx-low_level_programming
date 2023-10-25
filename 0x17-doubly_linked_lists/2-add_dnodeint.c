#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginnin
 * @head: A double pointer to the head
 * @n: The integer value to be stored in the new node
 *
 * Return: The address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	if (head == NULL)
		return (NULL);

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = *head;

	if (*head != NULL)
		(*head)->prev = n_node;

	*head = n_node;

	return (n_node);
}
