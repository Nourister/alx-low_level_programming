#include "main.h"
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @c: pointer value
 * Return: uppercase
 */

char *string_toupper(char *c)
/*  a function that changes all lowercase letters of a string to uppercase. */
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
	}
		return (c);
}
