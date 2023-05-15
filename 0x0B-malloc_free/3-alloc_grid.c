#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2
 * dimensional array of integers
 * @width: the value width
 * @height: the value height
 * Return: NULL on failure, If width or height is 0
 * or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **n;
	int a, b, c, d;

	if (width <= 0 || height <= 0)
		return (NULL);

	n = (int **)malloc(sizeof(int *) * width);

	if (n == NULL)
	{
		free(n);
		return (NULL);
	}

	for (a = 0; a < width; a++)
	{
		n[a] = malloc(sizeof(int) * height);

		if (n[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(n[b]);
			}

			free(n);
			return (NULL);
		}
	}
	for (c = 0; c < width; c++)
	{
		for (d = 0; d < height; d++)
		{
			n[c][d] = 0;
		}
	}
	return (n);
}
