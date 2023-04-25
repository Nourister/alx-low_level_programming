#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: The character to be checked
 * Return: 1 n is greater than zero, 0 n is zero and -1 n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
