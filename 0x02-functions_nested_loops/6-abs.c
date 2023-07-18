#include "main.h"

/**
 * Returns the absolute value of n.
 * value of an integer
 *
 * @c: takes integer type input for function
 *
 * Return: Always 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
