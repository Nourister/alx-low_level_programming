#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: the binary number to print
 *
 * Return: 0 (success)
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0'); /* Print '0' for the base case where n = 0 */
		return;
	}

	if (n >> 1)
	{
		/* recursive call to print bin rep of n div by 2 */
		print_binary(n >> 1);
	}

	/* print the least signification of n after the recursive call */
	_putchar((n & 1) + '0');
}
