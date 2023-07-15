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
	int i;

	for (i = 10; i <= 15; i++)
	{
		putchar(i + 'a' - 10);
	}

	putchar('\n');

	return (0);
}
