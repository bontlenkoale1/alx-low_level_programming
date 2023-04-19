#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name -  function that prints a name.
 * @name: the persons name
 * @f: function taken by pointer
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
