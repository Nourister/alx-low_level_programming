#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: counts number of arguments
 * @argv: size of an array of string
 * Return: 0(success)
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("argv[%2d]: %s\n", count, argv[count]);

	return (0);
}
