#include "main.h"
#include <stdio.h>

/**
 * _strchr - finds the first occurrence of a character in a string
 * @c: the value to locate
 * @s: pointer to the value to locate
 * Return: 0
 */

char *_strchr(char *s, char c)
/* a function that locates a character in a string. */
{
	int f;

	for (f = 0; s[f] != '\0'; f++)
	/* compares the first occurence to c. */
	{
	if (s[f] == c)
	/* return pointer to the first occurrence of c. */
	return (s + f);
	}
	/* return null if the specified character is not found. */
	return (NULL);
}
