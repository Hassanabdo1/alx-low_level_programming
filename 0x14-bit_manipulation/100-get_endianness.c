#include "main.h"

/**
 * get_endianness - Determines the endianness of the system.
 *
 * This function checks the endianness of the underlying system and returns 0
 * for big-endian or 1 for little-endian.
 *
 * Return: 0 for big-endian, 1 for little-endian.
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
