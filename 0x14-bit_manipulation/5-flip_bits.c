#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: The number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int diff = n ^ m;/* XOR operation to get the differing bits */

	while (diff != 0)
	{
		/* Check the least significant bit of diff */
		counter += diff & 1;
		/* Right shift diff by 1 to process the next bit */
		diff >>= 1;
	}

	return (counter);
}
