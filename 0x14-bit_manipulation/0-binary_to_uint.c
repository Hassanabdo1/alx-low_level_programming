#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @b: The binary number as a string.
 *
 * Return: The unsigned int form of the number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;

	if (!b)
		return (0);
		
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		result = (result << 1) + (b[i] - '0');

		i++;
	}

	return (result);
}
