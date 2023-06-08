#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: The number from which to retrieve the bit
 * @index: The index of the bit to retrieve
 *
 * Return: returns the value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* checks if index is out bounds */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
