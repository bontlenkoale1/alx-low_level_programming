#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory
 * @b: the size to allocate
 *
 * Return: 0
 */

void *malloc_checked(unsigned int b)

{
	void *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);

	return (c);
}
