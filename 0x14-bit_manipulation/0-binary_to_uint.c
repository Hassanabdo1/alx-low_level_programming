#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the binary number as a string
 *
 * Return: the unsigned int from of number
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
