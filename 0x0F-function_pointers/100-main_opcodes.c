#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcode
 * @argc: number of arguments
 * @argv: string of an array of arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	char *s;
	int bytes, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Eroor\n");
		exit(2);
	}
	s = (char *)main;

	for (n = 0; n < bytes; n++)
	{
		if (n == bytes - 1)
		{
			printf("%02hhx\n", s[n]);
			break;
		}
		printf("%02hhx", s[n]);
	}
	return (0);
}
