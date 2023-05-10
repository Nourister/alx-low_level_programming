#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion -  returns the length of a string
 * @s: the string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
/* a function that returns the length of a string. */
{
	if (*s == '\0')
	{
	return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
