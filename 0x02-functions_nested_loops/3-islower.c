#include"main."

/**
 *_islower -function to check if
*	character is lowercase
* @c: checks input of funktion
* return: return 1 if 'c' is lowercase
* otherwise always 0 (success)
*/

int _islower(int c)

	if (c >= 97 && c <= 122)
		return (1);
	return (0);
