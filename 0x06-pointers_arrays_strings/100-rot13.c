#include "main.h"

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
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnmopqrstuvwxyzabcdefghijklm";

	for (x = 0; n[x] != '\0'; x++)
	{
	i = 0;
	while (i < 10)
	i++;
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
