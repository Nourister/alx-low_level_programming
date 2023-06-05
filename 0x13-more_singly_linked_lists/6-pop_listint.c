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

	if (head == NULL || (*head) == NULL)
	{
		return (0);

		temp = *head;
		data = temp->n;
		*head = (*head)->next;
		free(temp);
	}

	return (data);
}
