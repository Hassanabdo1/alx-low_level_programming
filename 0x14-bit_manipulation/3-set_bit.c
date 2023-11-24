#include "main.h"

/**
 * set_bit - Set a specific bit at the given index to 1.
 * @n: Pointer to the number to modify.
 * @index: Index of the bit to set.
 *
 * Return: 1 on success, -1 on error (invalid index).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    return (index > 63) ? -1 : (*n |= (1UL << index), 1);

}
