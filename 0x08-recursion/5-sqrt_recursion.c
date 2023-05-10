#include "main.h"
#include <stdio.h>

int actual_sqrt_recursion(int n, int j);

/**
 * _sqrt_recursion - calculates the square root of natural number
 * @n: number to calculate square root
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (actual_sqrt_recursion(n, 1));
}

/**
 * actual_sqrt_recursion - calculate natural square root
 * @n: integer number
 * @j: iterator number
 * Return: natural square root
 */

int actual_sqrt_recursion(int n, int j)
{
	if (j * j > n)
	return (-1);

	if (j * j == n)
	return (j);

	return (actual_sqrt_recursion(n, j + 1));
}
