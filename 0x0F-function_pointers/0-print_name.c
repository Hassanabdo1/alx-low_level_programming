#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - we wont to print the name using pointer with function
 * @name: string to add
 * @f: pointer to function
 * Return: nathing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
