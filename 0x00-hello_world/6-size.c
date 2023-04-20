#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 for (success)
 */
int main(void)
{
	printf("Size of a char: %lu 1 byte(s)\n", sizeof(char));
	printf("Size of an int: %lu 4 byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu 4 byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu 8 byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu 4 byte(s)\n", sizeof(float));
	return (0);
}
