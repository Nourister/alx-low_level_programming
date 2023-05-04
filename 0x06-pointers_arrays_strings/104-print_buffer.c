#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int x, n, m;

	x = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (x < size)
	{
		n = size - x < 10 ? size - x : 10;
		printf("%08x: ", x);
		for (m = 0; m < 10; m++)
		{
			if (m < n)
				printf("%02x", *(b + x + m));
			else
				printf("  ");
			if (m % 2)
			{
				printf(" ");
			}
		}
		for (m = 0; m < n; m++)
		{
			int c = *(b + x + m);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		x += 10;
	}
}

