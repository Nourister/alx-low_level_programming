#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - Prints variable in base 10
 * Return: Always (success)
 */
int main(void)

{
	int g;

	for (g = '0'; g <= '9'; g++)
		putchar(g);
	putchar('\n');

	return (0);
}
