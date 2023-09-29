#include "main.h"

/**
 * binary_to_uint - Convert a binary string to an unsigned integer.
 * @b: A pointer to the binary string to be converted.
 *
 * This function takes a binary string 'b' and converts it to an equivalent
 * unsigned integer. The binary string must only contain '0' and '1' characters.
 *
 * @b: The binary number as a string.
 *
 * Return: The unsigned integer equivalent of the binary string, or 0 if 'b' is
 *         NULL or contains non-binary characters.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int tmp = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		tmp = 2 * tmp + (b[i] - '0');
	}

	return (tmp);
}