#include "main.h"

/**
 * _isalpha - checks if character is a letter
 * both lowercase or uppercase
 *
 * @c: takes input from other function.
 *
 * Return 1 is c if true else 0
 */

int _isalpha(int c)
{/* Returns 1 if c is lowercase, 0 otherwise. */
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
