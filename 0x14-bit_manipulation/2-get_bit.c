#include "main.h"

/**
 * get_bit - Returns the value of a bit at a specified index in a decimal number.
 * @n: Number to index.
 * @index: Index of the bit to retrieve.
 *
 * Return: The bit state or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int nah;

	if (index > 63)
		return (-1);

	nah = (n >> index) & 1;

	return (nah);
}
