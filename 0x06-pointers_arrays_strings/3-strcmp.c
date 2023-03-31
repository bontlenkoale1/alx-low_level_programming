#include "main.h"

/**
 * _strcmp - compares pointers to two strings 
 * @s1: a pointer to the first string compared
 * @s2: a pointer to the second string compared
 * Return: if string 1 < string 2, the negative difference the of first unmatched characters
 * If string 1 == string 2, 0.
 * If string 1 > string 2, the positive difference of the first unmatched characters
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
	
}
