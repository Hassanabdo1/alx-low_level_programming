#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: the number to index
 * @index: the bit to set
 *
 * Return: 1 if success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    return (index > 63) ? -1 : (*n |= (1UL << index), 1);

}
