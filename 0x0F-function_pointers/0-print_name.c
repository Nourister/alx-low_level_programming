#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: a pointer to a string
 * @f: pointer to print_name function which has
 * a void return type and takes a single character
 * parameter
 * Return: nothing
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
