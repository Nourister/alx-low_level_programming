#include "main.h"

/**
 * _islower - print lowercase characters
 * @c: The character to be checked
 * Return: return 1 for lowercase or 0 for anthing else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
