#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function to calculet the sum of nodes
 * @head: pointer to the header of the list
 * Return: tne sum of nodes
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0, data;

	if (head)
		while (node != NULL)
		{
			data = head->n;
			sum = sum + data;
			head = head->next;
			node = head;
		}
	else
		return (0);

	return (sum);
}
