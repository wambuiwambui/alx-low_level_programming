#include "main.h"
/**
 * _memset - fills first bytes of memory area with constant byte.
 * @b :constant byte
 * @s: pointer
 * @n: bytes of memory area
 *
 * Return: Nothing.
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *t = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (t);
}
