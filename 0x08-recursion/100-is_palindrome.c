#include "main.h"
#include <stdio.h>

int check_palindrome(char *s, int j, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string to calculate length
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	return (1);

	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - return length of a string
 * @s: string to calculate length
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks recursive character for palindrome
 * @s: string to check
 * @j: iterator
 * @len: length of string
 * Return: 1 if a string is a palindrome and 0 if not
 */

int check_palindrome(char *s, int j, int len)
{
	if (*(s + j) != *(s + len - 1))
	return (0);

	if (j >= len)
	return (1);

	return (check_palindrome(s, j + 1, len - 1));
}
