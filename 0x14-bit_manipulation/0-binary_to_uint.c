#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @c: The binary number as a string.
 *
 * Return: The unsigned int form of the number.
 */
unsigned int binary_to_uint(const char *c)
{
	int i = 0;
	unsigned int result = 0;

	if (!c)
		return (0);

	// Iterate through the string until the end
	while (c[i])
	{
		// Check if the character is not a binary digit (0 or 1)
		if (c[i] < '0' || c[i] > '1')
			return (0);

		// Update the result by shifting left and adding the current digit
		result = (result << 1) + (c[i] - '0');

		// Move to the next character in the string
		i++;
	}

	return (result);
}
