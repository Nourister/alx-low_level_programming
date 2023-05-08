#include "main.h"
#include <stdio.h>

/**
 * _memset - fill a block of memory with a constant byte
 * @b: the value tp fill memory block with
 * @n: number of bytes to be filled
 * @s: the pointer to the memory block you want to fill
 * Return: the pointer
 */

char *_memset(char *s, char b, unsigned int n)
/* a function that fills memory with a constant byte. */
{
	unsigned int j;

	j = 0;
	while (j < n)
	{
	j++;
	s[j] = b;
	}
	return (s);
}
