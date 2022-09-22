#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatenates two strings.
 * @dest: input parameter
 * @src: input parameter
 * @n: bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[b] != '\0')
		b++;
	while (src[a] != '\0' && a < n)
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = '\0';

	return (dest);
}
