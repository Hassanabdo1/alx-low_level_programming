#include "main.h"

/**
 * get_endianness - Check system endianness.
 *
 * Determine the system endianness and return 0 for big-endian, 1 for little-endian.
 *
 * Return: 0 for big-endian, 1 for little-endian.
 */
int get_endianness(void)
{
	unsigned int l = 1;
	char *c = (char *) &l;

	return (*c);
}
