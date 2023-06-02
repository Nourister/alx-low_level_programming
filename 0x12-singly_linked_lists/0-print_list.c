#include "lists.h"
#include <stdio.h>

/**
 * print_list -  prints all the elements of a list_t list.
 * @list_t - lists of elements
 * @h: pointer to the modes in the list_t
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		counter++;
	}

	return (counter);
}
