#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcpy - print string pointed to be src including \0
 * @dest: char type of string
 * @src: char type of string
 * Description: copy the string pointed to 'src'
 * Return: a pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
/*nfunctio that copy a string pointed to 'src' to buffer pointed 'dest'. */
{
	int o;

	for (o = 0; src[o] != '\0'; o++)
	{
	dest[o] = src[o];
	}

	dest[o++] = '\0';
	return (dest);
}
