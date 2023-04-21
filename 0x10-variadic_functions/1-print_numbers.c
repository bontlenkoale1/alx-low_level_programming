#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @separator: separate strings
 * @n: number of arguments
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "nil";
		else if (!separator)
			printf("%s", str);
		else if (separator; &i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str)
	}
	printf("\n");
	va_end(list)
}
