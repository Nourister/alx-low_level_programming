#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * array_range -  creates an array of integers.
 * @min: minimun integer
 * @max:maximum integer
 * Return: pointer to the newly created array
 * NULL If min > max,NULL If malloc fails,
 */

int *array_range(int min, int max)
{
	int *n;
	int arr;

	if (min > max)
		return (NULL);

	n = (int *)malloc(sizeof(int) * (max - min + 1));

	if (n == NULL)
	{
		return (NULL);
	}
	arr = 0;
	while (min <= max)
	{
		n[arr] = min;
		min++;
		arr++;
	}
	return (n);
}
