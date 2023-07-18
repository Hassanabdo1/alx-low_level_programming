#include "main.h"

/*
 * Function: _isalpha
 * ------------------
 * Checks whether a given character is an alphabetic character or not.
 *
 * c: The character to be checked.
 *
 * returns: 1 if c is a letter (lowercase or uppercase), 0 otherwise.
 */

int _isalpha(int c);

int main(void)
{
	char ch;

	printf("Enter a character: ");
	scanf("%c", &ch);

	if (_isalpha(ch))
		printf("%c is an alphabetic character.\n", ch);
	else
		printf("%c is not an alphabetic character.\n", ch);
	return 0;
}
