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

	for (j = 0; j < n; j++)
	dest[j] = src[j];

	return (dest);
}
