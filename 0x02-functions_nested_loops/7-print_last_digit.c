#include "main.h"

/**
 * print _last_digit of a number - Prints the last digit of a number
 * @n: The number to be treated
 * Return: Value of the last digit of number
 */

int print_last_digit(int n)

{


	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
