#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies n bytes from memory area src to dest
 * @src: source memory
 * @dest: destination memory
 * @n: number of bytes to be copied.
 *
 * Return: Nothing.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *t = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (t);
}
