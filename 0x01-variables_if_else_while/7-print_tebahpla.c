#include <stdio.h>


/**
 * main - entry point
 *
 * Description: the lowercase alphabet in reverse, followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}

