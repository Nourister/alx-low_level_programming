#include "main.h"
#include <stdio.h>

/**
 * set_string -  sets the value of a pointer to a char
 * @s: pointer src
 * @to: dest of the pointer
 * Return: 0(success)
 */

void set_string(char **s, char *to)
/* a function that sets the value of a pointer to a char. */
{
	*s = to;
}
