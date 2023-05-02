#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - print  character of string starting with first character
 * @str: character of a string
 * Return: void
 */

void puts2(char *str)
/* function to print character of a string starting with first character. */
{
	int c = 0;

	while (str[c] != '\n' && str[c] != '\0')
	{
	if (c % 2 == 0)
	{
	_putchar(str[c]);
	}
	c++;
	}
	_putchar('\n');
}
