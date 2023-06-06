#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A double pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		counter++;
		temp = current;
		current = current->next;

        /* Check if current node has been visited before */
		if (temp->next == (void *)temp)
		{
			*h = NULL;
			free(temp);
			break;
		}

        /* Mark the next node as visited */
		temp->next = (void *)temp;

		free(temp);
	}

	*h = NULL;

	return (counter);
}
