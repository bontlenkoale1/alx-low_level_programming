#include "main.h"
#include <stdio.h>

/**
 * print_array - to prints n as an elements of array integers
 * @a: arrays of integers
 * @n: number of elements of arrays to be printed
 * Return: void
 */

void print_array(int *a, int n)

{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
