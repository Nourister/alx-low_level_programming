#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more
 * hars in the string b that is not 0 or 1 b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int result = 0;

	if (b == NULL) /* input validation if b is null */
		return (0);

	/* itarates over each char in the string */
	for (n = 0; b[n] != '\0'; n++)
	{
		/* checks if the character is '0' or '1' */
		if (b[n] == '0')
		{
			/* shift result to the left by 1 bit */
			result <<= 1;
		}
		else if (b[n] == '1')
		{
			/* shift thr result to the left '1' bit and +1*/
			result <<= 1;
			result += 1;
		}
		else
		{
			/* invalid char found, return 0 */
			return (0);
		}
	}

	/* Return the converted uint */
	return (result);
}
