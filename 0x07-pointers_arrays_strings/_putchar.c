#include "main.h"
#include <unistd.h>
/**
 * _putchar - write character c to stdout
 * @c: The character to print
 *
 * Return: 1 when successful
 * on error, -1 is returned, and errno is set properly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
