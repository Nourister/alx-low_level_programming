#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - print half of a string followered by new line
 * @str: the string to be printed
 * Return: string
 */

void puts_half(char *str)
/* function to print a string followed with a new line. */
{
	int full_string, half_string;

	full_string = 0;
	while (str[full_string] != '\0')
	full_string++;

	half_string = full_string / 2;

	if (full_string % 2 == 1)
		half_string++;

	while (half_string < full_string)
	{
		_putchar(str[half_string]);
		half_string++;
	}
	_putchar('\n');
}

