#include "main.h"
#include <stdio.h>

/**
 * _strspn - function gets the length of a prefix substring
 * @s: the string being checked
 * @accept: strng beng checked against.
 *
 * Return: Always 0.
*/
unsigned int _strspn(char *s, char *accept)
{
	int x = 0, y;
	char *z = accept;

	while (*s)
	{
		y = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				x++;
				y = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = z;
		if (y == 0)
			break;
	}
	return (x);
}
