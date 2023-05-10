#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the string
 * Return: 0(success)
 */

void _puts_recursion(char *s)
/* a function that prints a string, followed by a new line. */
{
	if (*s)
	{
	putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	putchar('\n');
}
