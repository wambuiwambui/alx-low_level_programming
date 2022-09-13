#include "main.h"

/**
 * print_sign - function prints sign of a number
 * @n: the int we will use for the functions argument
 * Return: 0
*/
{
	if(n > 0)
	{
		_putchar('+');

		return(1);
	}
		else if (n < 0)
		{
			_putchar('-')
			return(-1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
}

