#include "main.h"
#include <string.h>

/**
 * _strncpy - copy a string
 * @dest: dest value
 * @src: src value
 * @n: integer value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
/* a function that copies a string. */
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; m++)
	{
	dest[m] = src[m];
	}
	while (m < n)
	{
	dest[m] = '\0';
	m++;
	}
	return (dest);
}
