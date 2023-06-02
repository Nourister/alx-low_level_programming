#include <stdio.h>

void print_message() __attribute__((constructor));

/**
 * print_message - prints before the main
 * 
 * Return: 0(success)
 */

void print_message()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
