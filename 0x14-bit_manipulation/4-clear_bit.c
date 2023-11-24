#include "main.h"

/**
 * clear_bit - Clear the bit at a specified index.
 * @n: Pointer to the number to modify.
 * @index: Index of the bit to clear.
 *
 * Return: 1 on success, -1 on error (invalid index).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
