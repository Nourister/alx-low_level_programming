#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 * only using putchar and without char variables
 * Return: Always 0(success)
 */

int main(void)

{
	int g;

	for (g = '0'; g <= '9'; g++)
		putchar(g);

	putchar('\n');

	return (0);
}
