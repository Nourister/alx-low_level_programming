#include "main.h"
#include <stdio.h>

int actual_prime_number(int n, int j);
/**
 * is_prime_number - returns 1 if the input integer is a
 * prime number, otherwise return 0
 * @n: number to return prime number
 * Return: 1 if the input integer is a prime
 * number, otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);

	return (actual_prime_number(n, n - 1));
}

/**
 * actual_prime_number - gets the exact prime number
 * @n: number to compare prime number
 * @j: iterator
 * Return: 1 if the input integer is a prime
 * number, otherwise return 0.
 */

int actual_prime_number(int n, int j)
{
	if (j == 1)
	return (1);

	if (n % j == 0 && j > 0)
	return (0);

	return (actual_prime_number(n, j - 1));
}

