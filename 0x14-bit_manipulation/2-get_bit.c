#include "main.h"

/**
 * get_bit - Retrieves the value of a specific bit at a given index in a number.
 * @n: The decimal number to extract the bit from.
 * @index: The index of the bit to retrieve, where 0 is the least significant bit.
 *
 * This function returns the state (0 or 1) of the bit at the specified index in
 * the binary representation of the number 'n'.
 *
 * @n: The decimal number to extract the bit from.
 * @index: The index of the bit to retrieve.
 *
 * Return: The bit value (0 or 1) at the specified index, or -1 if 'index' is
 *         out of range (greater than 63 for a 64-bit number).
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int nobe;

	if (index > 63)
		return (-1);

	nobe = (n >> index) & 1;

	return (nobe);
}
