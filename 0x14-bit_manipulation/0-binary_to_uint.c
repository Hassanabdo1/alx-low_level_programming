#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the binary number as a string
 *
 * Return: the unsigned int from of number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] > '1')
			return (0);
		result = 2 * result + (b[i] - '0');
	}

	return (result);
}