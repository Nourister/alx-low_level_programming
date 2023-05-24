#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - returns the index of the first element for
 * which the cmp function does not return 0
 * @array: pointer to parameter type integer
 * @size: is the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: -1 If no element matches, -1 If size <= 0
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (n < size)
	{
		n++;

		if (cmp(array[n]))
		{
			return (n);
		}
	}
	return (-1);
}
