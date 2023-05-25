#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings -  prints strings, followed by a new line
 * @separator:  is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 *
 * Description: If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
 *
 * Return: strings
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	char *str;
	va_list my_string;

	va_start(my_string, n);

	for (counter = 0; counter < n; counter++)
	{
		str = va_arg(my_string, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);


	if (counter != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(my_string);
}
