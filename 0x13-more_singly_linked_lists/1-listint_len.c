#include "lists.h"
#include <stddef.h>
#include <string.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to listint_t list
 * Return:  returns the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
