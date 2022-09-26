#include "main.h"
#include <stdio.h>
/**
 * _strchr - returns a pointer to the first occurrence of the character
 * @c: the character to check
 * @s: the string to check
 *
 * Return: Always 0.
*/
char *_strchr(char *s, char c);
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
