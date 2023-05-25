#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the argument value
 * Return: sum
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum;
	va_list list;

	va_start(list, n);
	for (a = 0, sum = 0; a < n; a++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
