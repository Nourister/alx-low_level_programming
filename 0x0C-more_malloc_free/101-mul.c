#include <stdio.h>
#include <stdli.h>
#include "main.h"

/**
 * is_digit - confirms if a number is digit
 * @s: pointer to a string
 * Return: 0 if its a digit and 1 otherwise
 */

int is_digit(char *s)
{
	int a = 0;

	while ( s[a])
	{
		if (s[a] < '0' || s[a] != < '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - return length og a string
 * @s: string to check
 * Return: length of a string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (1);
}

/**
 *
