#include "main.h"

/**
 * print_diagonal - draws diagonal line in the terminal
 * @n: the number of lines to draw
 * Return: empty
 */

void print_diagonal(int n)
{
	int x, w;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (w = 0; w < x; w++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
