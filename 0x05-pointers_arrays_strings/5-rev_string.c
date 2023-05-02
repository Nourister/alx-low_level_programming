#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - print reverses a string
 * @s: string to be reverse
 * Return: reverse string
 */

void rev_string(char *s)
/* function used to reverse a string, */
{
	int length = strlen(s);
	char temp;
	int middle = length / 2;
	int x;

	for (x = 0; x < middle; x++)
	{
	temp = s[x];
	s[x] = s[length - x - 1];
	s[length - x - 1] = temp;
	}
}
