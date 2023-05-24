#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of its own
 * @a: address of the main function
 * @i: number of bytes to print
 * Return: void
 *
 */

void print_opcodes(char *a, int i)
{
	int n;

	for (n = 0; n < i; n++)
	{
		printf("%.2hhx", a[n]);

		if (n < i -1)
			printf(" ");
	}

	printf("\n");
}

/**
 * main - prints opcodes of its own main function
 * @argc: number of arguments passed on a function
 * @argv: array of pointers
 *
 * Return: 0(success)
 */

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
	exit(1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)&main, i);

	return (0);
}
