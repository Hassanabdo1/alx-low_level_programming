#include "main.h"

/**
 * get_endianness - Check system endianness.
 *
 * Determines system endianness and returns 0 for big-endian, 1 for little-endian.
 *
 * Return: 0 for big-endian, 1 for little-endian.
 */
int get_endianness(void)
{
	unsigned int l = 1;
	char *c = (char *) &l;

	return (*c);
}
