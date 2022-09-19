#include <stdio.h>
#include "main.h"

/**
* rev_string - reverses a string
* @s: string to be reversed
*/
void rev_string(char *s)
{
	int x, tmp, len = _strlen(s);

	for (x = 0; x < len / 2; x++)
	{
		tmp = *(s + x);
		*(s + x) = *(s + len - x - 1);
		*(s + len - x - 1) = tmp;
	}
}

/**
* strlen - returns the length of a string
* @s: string to be reversed
*
* Return: length of string
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
