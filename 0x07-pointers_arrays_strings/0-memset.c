#include <stdio.h>
#include <string.h>

/**
 * _memset - Entry point
 * @s: pointed to
 * @n: first bytes
 * @b: constant byte
 *
 * Return: 0 when successful
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	memset(s, 'n', sizeof(char) * b);

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
