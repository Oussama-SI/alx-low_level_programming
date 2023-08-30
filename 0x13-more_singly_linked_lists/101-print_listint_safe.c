#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list, even if it has a loop.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 0, loop_detected = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			loop_detected = 1;
			break;
		}
	}

	if (loop_detected)
	{
		slow = head;
		while (slow != fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
			slow = slow->next;
			fast = fast->next;
		}

		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		printf("-> [%p] %d\n", (void *)fast, fast->n);
	}

	return (count);
}
