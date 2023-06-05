#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 -  frees a listint_t list.
 * @head: a pointer to a pointer of listint_t list
 *
 * Return: 0(success)
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}

	*head = NULL;
}
