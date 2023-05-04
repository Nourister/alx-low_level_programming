#include "main.h"
#include <stdio.h>

/**
 * print_number - print an integer
 * @n: input value
 * Return: an integer
 */

void print_number(int n)
/* a function that prints an integer. */
{
	unsigned int x;

	if (n < 0)
	{
	x = -n;
	_putchar('-');
	}
	else
	{
	x = n;
	}
	if (x / 10)
	{
	print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
