#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: counts number of arguments on a command line
 * @argv: the exact number of arguments on the command line
 * Return: 0(success)
 *
 */

int main(int argc, char *argv[])
{
	int (*optr)(int, int);

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}

	optr = get_op_func(argv[2]);

	if (!optr)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", optr(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
