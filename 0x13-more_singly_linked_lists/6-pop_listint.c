#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: pointer to pointer of listint_t list
 *
 * Return: 0 if the linked list is empty return
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
