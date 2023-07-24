#include "main.h"
#include <stdio.h>

/**
 * _strchr - finds the first occurrence of a character in a string
 * @c: the value to locate
 * @s: pointer to the value to locate
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
/* a function that locates a character in a string. */
{
	int f;

	for (f = 0; s[f] >= '\0'; f++)
	/* compares the first occurence to c. */
	{
	if (c == s[f])
	/* return pointer to the first occurrence of c. */
	return (s + f);
	}
	/* return null if the specified character is not found. */
	return (NULL);
}
