#include <stdio.h>


/**
 * main - entry point
 *
 * Description: that prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	int i, j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	if (i < j)
	{
	putchar(i + '0');
	putchar(',');
	putchar(' ');
	putchar(j + '0');
}
}
}
return (0);
}
