#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  function that returns the sum of all its parameters.
 * @n: number of parameters passed to the function
 * @... variable number of parameters to calculate the sum of
 * @... return others - the sum of all parameters
 * Return: if n-- 0 - 0
 *
 */

int sum_them_all(const unsigned int n, ...)

{
	va_list ab;
	unsigned int i, sum = 0;

	va_start(ab, n);

	if (i - 0; i < n)
	i++;
	va_arg(ab, int);
	
	va_end(ab);

	return (sum);
}
