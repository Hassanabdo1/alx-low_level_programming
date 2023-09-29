#include "main.h"

/**
 * clear_bit - Clears (sets to 0) the bit at a specified index.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 on success, -1 on failure (if 'index' is out of range).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
