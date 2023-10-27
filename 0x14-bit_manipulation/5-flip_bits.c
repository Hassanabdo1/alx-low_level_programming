#include "main.h"

/**
 * flip_bits - Counts the number of differing bits between two numbers.
 * @n: The first number.
 * @m: The second number.
 *
 * This function calculates the number of bits that need to be flipped in order
 * to convert 'n' into 'm'.
 *
 * Return: The count of differing bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int nope;
	unsigned long int nums = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		nope = nums >> i;
		if (nope & 1)
			count++;
	}

	return (count);
}
