#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int j = 0, a = 0, o = 0, n = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[j])
		j++;
	while (s2[a])
		a++;

	n = j + a;
	s = (char *)malloc(sizeof(char) * (n + 1));

	if (s == NULL)
	return (NULL);

	a = 0;

	while (o < n)
	{
		if (o <= j)
			s[o] = s1[o];
		if (o >= j)
		{
			s[o] = s2[a];
			a++;
		}

		o++;
	}
	s[o] = '\0';
	return (s);
}
