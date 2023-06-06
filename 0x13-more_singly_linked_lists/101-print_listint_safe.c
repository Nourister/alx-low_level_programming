#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: - pointer to a pointer of listint_t list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	const listint_t *current_node = head;
	const listint_t *loop_node = find_loop_node(head);

	if (loop_node != NULL)
	{
		printf("-> [%p] %d\n", (void *)current_node, current_node->n);
		printf("-> ... (loop detected)\n");
		exit(98);
	}

	while (current_node != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current_node = current_node->next;
		counter++;
	}

	return (counter);
}
