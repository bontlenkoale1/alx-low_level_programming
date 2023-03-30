#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @dest: to the string
 * @src: the source string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)

{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = drc[i];
		dlen++
	}
	dest[dlen] = '\0';
	return (dest);
}
