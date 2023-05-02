#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: the character to be used
 * Return: length of a string
 */

int _strlen(char *s)
/* the function to calculate and return the length of a string. */
{
	int longi = 0;

	while (*s != '\0')
	{
	longi++;
	s++;
	}
	return (longi);
}
