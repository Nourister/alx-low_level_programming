#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always (success)
 */

int main(void)
{
	int i;

	for (i = 38; i < 48; i++)
	{
		putchar(i);
	if (i != 37)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

