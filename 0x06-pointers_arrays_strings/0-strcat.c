#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination of the character
 * @src: source of the character
 * Return: dest
 */

char *_strcat(char *dest, char *src)
/* function that concatenates two strings and returns dest. */
{
	int n, m;

	/* to find the dest of the first string. */
	for (n = 0; dest[n] != '\0'; n++)
	/* to find src and dest of second string. */
	m = 0;
	while (src[m] != '\0')
	{
	dest[n] = src[m];
	n++;
	m++;
	}

	/* adding a null terminator at the end of concatenated string. */
	dest[n] = '\0';
	return (dest);
}
