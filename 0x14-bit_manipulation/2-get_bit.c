#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to index
 * @index: the bit to get
 *
 * Return: the bit state or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int nah;

	if (index > 63)
		return (-1);

	nah = (n >> index) & 1;

	return (nah);
}
