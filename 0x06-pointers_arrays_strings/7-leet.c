#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337.
 * @x: input value
 * Return: x
 */

char *leet(char *x)
/* a function that encodes a string into 1337. */
{
	int n, i;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (n = 0; x[n] != '\0'; n++)
	{
	i = 0;
	while (i < 10)
	i++;
	{
	if (x[n] == s1[i])
	{
	x[n] =  s2[i];
	}
	}
	}
	return (x);
}
