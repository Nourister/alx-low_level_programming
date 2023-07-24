#include "main.h"
#include <stdio.h>

/**
 * _strspn - compute the length (in bytes)
 * @s: pointer value
 * @accept: input
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
/* a function that gets the length of a prefix substring. */
{
	unsigned int j, i, value, check;

	value = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
	check = 0;
	for (i = 0; accept[i] != '\0'; i++)
	{
	if (accept[i] == s[j])
	{
	value++;
	check = 1;
	}
	}
	if (check == 0)
	return (value);
	}

	return (value);
}
