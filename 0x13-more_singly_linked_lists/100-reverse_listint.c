#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: - pointer to a pointer of listint_t list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
