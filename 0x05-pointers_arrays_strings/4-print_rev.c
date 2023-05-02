#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string in reverse
 * @s: the string to reverse
 * Return: reverse string
 */

void print_rev(char *s)
{
	int longi = 0;
	int x;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	for (x = longi; x > 0; x--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');

}

