#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first character
 * @s2: second character
 * Return: s1[x] -  s2[x]
 */

int _strcmp(char *s1, char *s2)
/* a function that compares two strings. */
{
	int x;
/* comparing comparing strings s1 and s2. */
	for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
	{
	if (s1[x] != s2[x])
	{
	return (s1[x] - s2[x]);
	}
	}

	return (0);
}
