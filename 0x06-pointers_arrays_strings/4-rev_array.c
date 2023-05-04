#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: value to input
 * @n: value to input
 * Return: void
 */

void reverse_array(int *a, int n)
/* a function that reverses the content of an array of integers. */
{
	int temp;
	int m;

	for (m = 0; m < n--; m++)
	{
		temp = a[m];
		a[m] = a[n];
		a[n] = temp;
	}
}
