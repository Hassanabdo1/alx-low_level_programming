#include "main.h"

/**
 * _isdigit - check if c is upper
 *
 * @c: input for alphabet
 *
 * Return: 1 if its uppercase, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
