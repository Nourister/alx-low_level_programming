#include <stdio.h>

/**
 * main - prints the alphabets in lowercase and then in upeercase
 * Return: Always (success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);

	putchar('\n');
	return (0);
}
