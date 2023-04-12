#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: pointer that point to newly allocated space in memory & has s1 contents
 * @s2: followed by the contents of s2, and null terminated
 *
 *Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)

{

char *s;
int i = 0, j = 0, k = 0, l = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[j])
j++;

l = i + j;
s = malloc((sizeof(char) * l)  +i);

if (s == NULL)
return (NULL);
j = 0;

while (k < l)
{

if (k <= l)
{
s[k] = s1[k];
}
 
if (k >= i)
{
s[k] = s2[j];
j++;
}
k++;
}

s[k] = ('\0');
return (s);
}
