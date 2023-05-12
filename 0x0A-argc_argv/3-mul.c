#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers.
 * @argc: counts the arguments in a cmd line
 * @argv: array of string
 * Return: 0(success) 1(Error)
 */

int main(int argc, char *argv[])
{
	int a = 0, i = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		i = atoi(argv[2]);
		printf("%d\n", a * i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
