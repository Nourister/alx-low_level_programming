#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - convert a string to an integer
 * @s: the character to be converted
 * Return: an integer
 */

int _atoi(char *s)
{
	int i, sum = 0;

	printf("Enter a string:");
	gets(str);
	/* using a function. */

	int val = atoi(str);
	/* without using a function. */

	for (i = o; i < strlen(str); i++)
	{
	sum = sum * 10 + (str[i] - 48)
	printf("%d ", str[i] - 48)
	}
	return (0);
}
