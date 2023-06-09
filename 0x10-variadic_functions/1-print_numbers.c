#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: s the number of integers passed to the function
 * @...: a variable number to be printed
 * Return: 0(success)
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	va_list my_num;

	va_start(my_num, n);

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", va_arg(my_num, int));

	if (counter != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

		printf("\n");

	va_end(my_num);
}
