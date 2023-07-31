#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name passed
 * @name: the string passed
 * @f: pointer to the function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		(f) (name);
	}
}
