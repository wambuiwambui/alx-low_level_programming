#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c - the int we'll use for the function urguement
 *Return: 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
