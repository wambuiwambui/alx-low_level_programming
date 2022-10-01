#include "main.h"
#include <stdio.h>
/**
 * _strchr - returns a pointer to the first occurrence of the character.
 * @s: string to be checked.
 * @c: character to check for.
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
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
