#include "main.h"

/**
 * get_endianness - Check system endianness.
 *
 * Returns 0 for big-endian or 1 for little-endian.
 */
int get_endianness(void)
{
	unsigned int l = 1;
	char *c = (char *) &l;

	return (*c);
}
