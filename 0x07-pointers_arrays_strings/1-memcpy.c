#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: the dest of copy address
 * @src: the source address to copy
 * @n: input
 * Rerturn: 0(success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
/* a function that copies memory area. */
{
	unsigned int j;

	j = 0;
	while (j < n)
	{
	dest[j] = src[j];
	j++;
	}

	return (dest);
}
