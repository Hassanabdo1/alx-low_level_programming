#include <stdio.h>

/**
 * main - entry point
 *
 * Description:  the numbers of base 16 in lowercase, followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);

		if (digit == 57)
			digit += 39;
		digit++;
	}

	putchar('\n');

	return (0);
}
