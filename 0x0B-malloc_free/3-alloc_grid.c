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
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	n = (int **)malloc(sizeof(int *) * width);

	if (n == NULL)
		return (NULL);
	for (a = 0; a < width; a++)
	{
		n[a] = (int *)malloc(sizeof(int) * height);
		if (n[a] == NULL)
		{
			free(n);
			for (b = 0; b <= a; b++)
				free(n[b]);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			n[a][b] = 0;
		}
	}
	return (n);
}
