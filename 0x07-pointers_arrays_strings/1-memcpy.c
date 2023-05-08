#include "main.h"
#include <stdio.h>

/**
 * _memcpy - The _memcpy() function copies n bytes
 * from memory area src to memory area dest
 * @dest: the dest of copy address
 * @src: the source address to copy
 * @n: input
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
/*  a function that copies memory area. */
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
