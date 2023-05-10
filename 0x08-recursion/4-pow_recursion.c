#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: first value
 * @y: second value
 * Return: returns the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
/* a function that returns the value of x raised to the power of y. */
{
	if (y < 0)
	return (-1);

	if (y <= 0)
	return (1);

	return (x * _pow_recursion(x, y - 1));
}
