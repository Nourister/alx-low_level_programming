#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: input
 * @size: the size of value
 * Return: 0(success)
 */

void print_diagsums(int *a, int size)
/* a function that prints the sum of the two diagonals of a square. */
{
	int j, i, sum_of1 = 0, sum_of2 = 0;

	for (j = 0; j <= (size * size); j = j + size + 1)
	sum_of1 = sum_of1 + a[j];

	for (i = size - 1; i <= (size * size) - size; i = i + size - 1)
	sum_of2 = sum_of2 + a[i];
	printf("%d, %d\n", sum_of1, sum_of2);
}
