#include "main.h"

/**
 * times_table - print the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	int i, n, c;

	for (i = 0; i < 10; i++)
	{
	for (n = 0; n < 10; n++)
	{
	c = i * n;
	if (n == 0)
	{
	_putchar(c + '0');
	}
	if (c < 10 && n != 0)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(c + '0');
	}
	else if (c >= 10)
	{
	_putchar(',');
	_putchar(' ');
	_putchar((c / 10) + '0');
	_putchar((c % 10) + '0');
	}
	}
	_putchar('\n');
	}
}
