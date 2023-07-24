#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * @s: pointer to a value to match
 * @accept: input value
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
/* a function that searches a string for any of a set of bytes. */
{
	int j, i;

	for (j = 0; s[j] != '\0'; j++)
	{
	for (i = 0; accept[i] != '\0'; i++)
	{
	if (accept[i] == s[j])
	return (s + j);
	}
	}
	return (NULL);
}
