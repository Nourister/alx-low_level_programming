#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array.
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 * @array: points to an integer type
 *
 * Return: nothing
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || action == NULL)
		return;
	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
