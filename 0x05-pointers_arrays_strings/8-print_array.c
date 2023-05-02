#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element array of integer
 * @a: an array
 * @n: element of array
 */

void print_array(int *a, int n)
/* function that print an element of an array of integer. */
{
	int index_of_array;

	for (index_of_array = 0; index_of_array < n; index_of_array++)
	{
	printf("%d", a[index_of_array]);
	if (index_of_array != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
