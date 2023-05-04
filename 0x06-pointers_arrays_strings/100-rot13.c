#include "main.h"
#include <stdio.h>

/**
 * rot13 - encode a string using rot13.
 * @n: pointer to string
 * Return: *n
 */

char *rot13(char *n)
/* a function that encodes a string using rot13. */
{
	int x, i;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; n[x] != '\0'; x++)
	{
	for (i = 0; i < 52; i++)
	{
	if (n[x] == data1[i])
	{
	n[x] = datarot[i];
	break;
	}
	}
	}
	return (n);
}
