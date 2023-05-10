#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string
 * Return: 0(success)
 */

void _print_rev_recursion(char *s)
/* a function that prints a string in reverse. */
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
