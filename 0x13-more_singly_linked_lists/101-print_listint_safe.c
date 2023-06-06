#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t counter = 0;

	if (head == NULL)
		return (0);

	slow = head;
	fast = head->next;

	while (fast && fast->next)
	{
		if (slow == fast)
		{
			counter++;
			slow = head;
			while (slow != fast->next)
			{
				counter++;
				slow = slow->next;
				fast = fast->next;
			}
			return (counter);
		}
		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	size_t loop_length = looped_listint_len(head);

	while (head && (loop_length == 0 || counter < loop_length))
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		counter++;
	}

	if (loop_length > 0)
		printf("-> [%p] %d\n", (void *)head, head->n);

	return (counter);
}

