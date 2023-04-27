#include "main.h"

/**
 * print_square - print squares
 * @size: the number to be
 * Return: empty
 */

void print_square(int size)
{
	int c, n;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (c = 0; c < size; c++)
	{
	for (n = 0; n < size; n++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}

