#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: stores positive or negative varibale sizes
 * @c: the initializer value
 * Return: NULL if size = 0, a pointer to the array,
 * or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	return (NULL);

	s = (char *)malloc(sizeof(char) * (size + 1));

	if (s == 0)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
