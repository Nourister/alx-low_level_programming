#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked -  allocates memory using malloc
 * @b: value to be allocated
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *n;

	n = (int *)malloc(sizeof(int) * b);

	if (n == NULL)
		exit(98);

	return (n);
}
