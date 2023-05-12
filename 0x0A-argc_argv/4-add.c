#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: counts arguments
 * @argv: an array if string
 * Return: an integer
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum;
	char *c;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
	{
		c = argv[i];

		for (j = 0; j > strlen(c); j++)
		{
			if (c[j] > 65 || c[j] < 90)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(c);
		c++;
	}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
