#include "search_algos.h"

/**
 * print_array - Prints elements of an integer array within
 * a specified range.
 * @array: Pointer to the first element of the array to be printed
 * @a: The starting index of the range to be printed
 * @b: The ending index of the range to be printed
 *
 * This function prints the elements of the integer array from
 * index 'a' to index 'b'.
 * The array is assumed to be valid, and indices 'a' and 'b'
 * should be within the bounds
 * of the array to avoid undefined behavior.
 */
void print_array(int *array, size_t a, size_t b)
{
	size_t c;

	if (array)
	{
		printf("Searching in array: ");
		for (c = a; c < a + (b - a + 1); c++)
			printf("%d%s", *(array + c), c < a + (b - a) ? ", " : "\n");
	}
}

/**
 * binary_search_index - Searches for a value in a subarray
 * using binary search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @a: The starting index of the subarray to be searched
 * @b: The ending index of the subarray to be searched
 * @value: The value to search for
 *
 * This function performs binary search within the specified
 * subarray [a, b] to find
 * the target 'value'. The array is assumed to be sorted in
 * ascending order, and indices
 * 'a' and 'b' should be within the bounds of the array
 * to avoid undefined behavior.
 *
 * Return: The index where the value is located, or -1
 * if not present in the subarray.
 */
int binary_search_index(int *array, size_t a, size_t b, int value)
{
	size_t n;

	if (!array)
		return (-1);
	print_array(array, a, b);
	n = a + ((b - a) / 2);
	if (a == b)
		return (*(array + n) == value ? (int)n : -1);
	if (value < *(array + n))
		return (binary_search_index(array, a, n - 1, value));
	else if (value == *(array + n))
		return ((int)n);
	else
		return (binary_search_index(array, n + 1, b, value));
}

/**
 * binary_search - Searches for a value in a sorted array
 * using binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if
 * not present or if the array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}
