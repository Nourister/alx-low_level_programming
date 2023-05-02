#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the value of tow integers
 * @a: the first value to be swap
 * @b: the second value to be swap
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function to swap the two int. */
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


