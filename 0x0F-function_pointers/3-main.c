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

int main(int __attribute__((__unused__))argc, char *argv[])
{
	char *op;
	int num1, num2;

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = (argv[2]);
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}

	if ((*op == '/' && num2 == 0) || ((*op == '%' && num2 == 0)))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
