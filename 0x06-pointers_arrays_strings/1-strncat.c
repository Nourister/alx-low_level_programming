#include "main.h"
#include <string.h>
#include <time.h>

/**
 * _strncat - does not need to be null-terminated if it has n or more bytes
 * @dest: the value to the dest
 * @src: the src of the value
 * @n: the integer value
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
/* the function that Write a function that concatenates two strings. */
{
	int i, m;

	for (i = 0; dest[i] != '\0'; i++)
	m = 0;
	while (m < n && src[m] != '\0')
	{
	dest[i] = src[m];
	i++;
	m++;
	}

	dest[i] = '\0';
	return (dest);
}
