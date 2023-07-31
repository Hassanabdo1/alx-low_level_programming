#include "maine.h"

/**
 * *_memse - fills memory with a constant byte.
 * @s:pointer to  the put is the constant
 * @b: constant
 * @n: max bytes is to use
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for(i = 0; n > 0; i++ , n--)
	{
		s{i}  = b;
	}

	return (s);
}
