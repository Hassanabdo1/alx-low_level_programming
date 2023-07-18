#include "main.h"

int _isalpha(int c)
{
/* Check if c is between 'a' and 'z', inclusive, or between 'A' and 'Z', inclusive. */
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
		return 1;
	}else {
		return 0;
	}


int test_isalpha(void)
{
	char ch = 'a';
	int is_alpha = _isalpha(ch);
	printf("The character '%c' is alpha: %d\n", ch, is_alpha);
	return 0;
}
}
