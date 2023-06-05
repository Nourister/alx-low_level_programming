#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * linked list.
 * @head: pointer to a listint_t list
 * @index: number of nodes
 *
 * Return: NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int counter = 0;

	while (current_node != NULL)
	{
		if (counter == index)
			return (current_node);

		counter++;
		current_node = current_node->next;
	}
		/* if the index is greater than the no. of nodes */

		return (NULL);
}
