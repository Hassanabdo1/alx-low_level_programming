#include "main.h"

/**
 * get_endianness - returns the endianness of the system
 * Return: 0 for big, 1 for small
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
