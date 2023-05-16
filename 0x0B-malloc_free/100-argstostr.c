#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 * Return: NULL if ac == 0 or av == NULL,
 * a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int x = 0, y = 0, z = 0, ch = 0;
	char *c;

	if (ac == 0 || av == 0)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			ch++;
	}

	ch += ac;

	c = (char *)malloc(sizeof(char *) * (ch + 1));

	if (c == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			c[z] = av[x][y];
			z++;
		}

	if (c[z] == '\0')
	{
		c[z++] = '\n';
	}
	}

	return (c);
}
