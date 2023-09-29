#include "main.h"

/**
 * set_bit - Set a specified bit to 1.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to set.
 *
 * Returns: 1 on success, -1 on error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
