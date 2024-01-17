#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear
 * search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located,
 *         or -1 if the value is not present or if the array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a;

	for (a = 0; (a < size) && (array); a++)
	{
		if (*(array + a) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)a, *(array + a));
			return (a);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)a, *(array + a));
		}
	}
	return (-1);
}
