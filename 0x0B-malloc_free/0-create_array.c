#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,initializes it with a specific char
 * @c: fill in char in the array
 * @size: the size of an array
 *
 * Return: Returns a pointer to the array,or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
