#include "main.h"

/**
 * flip_bits - conts the number of differing bits between two numbers.
 * @n: The first number.
 * @m: The second number.
 *
 * This function calculates the number of bits that need to be flipped in order
 * to convert 'n' into 'm'.
 *
 * Return: The cont of differing bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, cont = 0;
	unsigned long int tmp;
	unsigned long int numbe = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		tmp = numbe >> j;
		if (tmp & 1)
			cont++;
	}

	return (cont);
}
