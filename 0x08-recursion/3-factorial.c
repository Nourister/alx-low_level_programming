#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 * @n: thr integer number
 * Return: factorial of a number
 */

int factorial(int n)
/* a function that returns the factorial of a given number. */
{
	if (n < 0)
	return (-1);

	if (n <= 0)
	return (1);

	return (n * factorial(n - 1));
}
