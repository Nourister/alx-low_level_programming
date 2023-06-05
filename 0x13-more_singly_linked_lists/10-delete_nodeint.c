#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked list.
 * @head: pointer to a pointer listint_t list
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current_node = *head;

	for (i = 0; i < index - 1 && current_node != NULL; i++)
		current_node = current_node->next;

	if (current_node == NULL || current_node->next == NULL)
		return (-1);

	temp = current_node->next;
	current_node->next = temp->next;
	free(temp);

	return (1);
}
