#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string in question
 *
 * Return: length of a string
*/
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum +=  _strlen_recursion(s + 1);
	}
	return (sum);
}
