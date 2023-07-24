#include "main.h"
#include <string.h>
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
	fgets(s, 100, stdin);

    /* without using a function. */
	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			sum = sum * 10 + (s[i] - '0');
			printf("%d ", s[i] - '0');
		}
	}
	return (sum);
}
