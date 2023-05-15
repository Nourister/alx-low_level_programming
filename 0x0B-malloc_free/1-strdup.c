#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: pointer string
 * Return: NULL if str = NULL, a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *s;
	int j = 1, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[j])
	{
		j++;
	}

	s = (char *)malloc(sizeof(char) * (j + 1));

	if (s == NULL)
		return (NULL);

	while (i < j)
	{
		s[i] = str[i];
		i++;
	}

	s[i] = '\0';
	return (s);
}
