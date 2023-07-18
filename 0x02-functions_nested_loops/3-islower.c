#include"main.h"

/**
 *_islower -function to check if
*	character is lowercase
*
* @c: checks input of funktion
* return: return 1 if 'c' is lowercase
* otherwise always 0 (success)
*/
/* Returns 1 if c is lowercase, 0 otherwise. */
int _islower(int c)
{	/* Check if c is between 'a' and 'z', inclusive. */
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
