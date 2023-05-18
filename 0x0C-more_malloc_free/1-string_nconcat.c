#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: seocnd string
 * @n: integer value
 * Return: NULL If the function fails
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int j = 0, a = 0, o = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[j])
		j++;
	while (s2[o])
		o++;

	if (n >= o)
	l = j + o;
	else
	l = j + n;
	s = (char *)malloc(sizeof(char) * (l + 1));

	if (s == NULL)
	return (NULL);

	o = 0;
	while (a < l)
	{
	if (a <= j)
	s[a] = s1[a];
	if (a >= j)
	{
	s[a] = s2[o];
	o++;
	}
	a++;
	}
	s[a] = '\0';
	return (s);
}
