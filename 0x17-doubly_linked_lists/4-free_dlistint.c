#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the first node in the dlistint_t
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
