#include "main.h"

/**
 * set_bit - Sets the bit at a specified index to 1.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to set (0-based).
 *
 * This function modifies the bit at the given index in the number 'n' by setting
 * it to 1. If the index is out of range for the number's representation, it
 * returns -1; otherwise, it returns 1 to indicate success.
 *
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to set.
 *
 * Return: 1 on success, -1 on error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
