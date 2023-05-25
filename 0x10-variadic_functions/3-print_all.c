#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all -  prints anything
 * @format: is a list of types of arguments passed
 * to the function
 *
 * Return: 0(success)
 *
 */

void print_all(const char * const format, ...)
{
	int n = 0;
	char *s, *separator = "";

	va_list my_list;

	va_start(my_list, format);

	if (format)
	{
	while (format[n])
	{
	switch (format[n])
	{
	case 'c':
		printf("%s%c", separator, va_arg(my_list, int));
		break;
	case 'i':
		printf("%s%d", separator, va_arg(my_list, int));
		break;
	case 'f':
		printf("%s%f", separator, va_arg(my_list, double));
		break;
	case 's':
		s = va_arg(my_list, char *);
		if (!s)
		s = "(nil)";
		printf("%s%s", separator, s);
		break;

		default:
		n++;
		continue;
	}
		separator = ",";
		n++;
	}
	}
	printf("\n");
	va_end(my_list);
}
