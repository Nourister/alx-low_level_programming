#include "main.h"
#include <stdio.h>

/**
 * _puts - print the string followered by a new line to stdout
 * @str: strig to print
 * Return: void
 */

void _puts(char *str)
/* the function to print the string to stdout. */
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
