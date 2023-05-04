#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string to be capitalised
 * Return: a pointer of the changed string
 */

char *cap_string(char *str)
/* a function that capitalizes all words of a string. */
{
	int index = 0;

	while (str[index])
	{
	while (!(str[index] >= 'a' && str[index] <= 'z'))
	index++;

	if (str[index - 1] == 32 ||
	str[index - 1] == '\t' ||
	str[index - 1] == '\n' ||
	str[index - 1] == ',' ||
	str[index - 1] == ';' ||
	str[index - 1] == '.' ||
	str[index - 1] == '!' ||
	str[index - 1] == '?' ||
	str[index - 1] == '"' ||
	str[index - 1] == '(' ||
	str[index - 1] == ')' ||
	str[index - 1] == '{' ||
	str[index - 1] == '}' ||
	index == 0)
	str[index] -= 32;
	index++;
	}
	return (str);
}
