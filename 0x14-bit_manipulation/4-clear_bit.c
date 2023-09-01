#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: the number to index
 * @index: index bit to clear
 *
 * Return: 1 if success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
