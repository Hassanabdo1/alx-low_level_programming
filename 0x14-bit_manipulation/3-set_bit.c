/**
 * set_bit - Sets a specific bit at a given index to 1 in an unsigned long int.
 * @n: A pointer to the number in which the bit should be set.
 * @index: The index of the bit to set, where 0 is the least significant bit.
 *
 * This function modifies the value pointed to by 'n' by setting the bit at the
 * specified index to 1, without affecting the other bits.
 *
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to set.
 *
 * Return: 1 if the operation is successful, or -1 on error if 'index' is out of
 *         range (greater than 63 for a 64-bit number).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
