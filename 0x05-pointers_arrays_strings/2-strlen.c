#include <stdio.h>

/**
 * _strlen - Returns the lentgh of a string
 * @str: To get the length of a string
 * Return: the length of @str
 */
size_t _strlen(const char *str)
{

	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
