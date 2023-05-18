#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with
 * a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: 0 (succes)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int n;
	char *s;

	if (ptr == NULL)
	{
		s = malloc(new_size);
			return (s);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	s = malloc(new_size);

	if (s == NULL)
		return (NULL);

	for (n = 0; n < old_size && n < new_size; n++)
		s[n] = ((char *)ptr)[n];
	free(ptr);
	return (s);
}
