#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of memory block
 * @size: size of the memory
 * Return: NULL If nmemb or size is 0, then
 * NULL If malloc fails,
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int n = 0, a = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);

	a = nmemb * size;
	p = malloc(a);

	if (p == NULL)
		return (NULL);

	while (n < a)
	{
		p[n] = 0;
		n++;
	}
	return (p);
}

