#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copy a block of data from a src address to a dest address
 * @dest: the dest of copy address
 * @src: the source address to copy
 * Rerturn: dest
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