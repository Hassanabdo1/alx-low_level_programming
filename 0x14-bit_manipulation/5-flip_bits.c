#include "main.h"

/**
 * flip_bits - Count differing bits between two numbers.
 * @n: First number.
 * @m: Second number.
 *
 * Returns count of differing bits between 'n' and 'm'.
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
