#include "main.h"

/**
 * swap_int - waps the values of two integers
 * uning two input parameters
 *
 * @a: input prameter 1
 * @b: input prameter 2
 *
 * Return Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
