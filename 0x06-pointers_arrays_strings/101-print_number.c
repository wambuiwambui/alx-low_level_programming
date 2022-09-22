#include "main.h"
/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: void.
 */
void print_number(int n)
{
	unsigned int x, y, z;

	if (n < 0)
	{
		_putchar(45);
		x = n * -1;
	}
	else
	{
		x = n;
	}
	y = x;
	z = 1;

	while (y > 9)
	{
		y /= 10;
		z *= 10;
	}

	for (; z >= 1; z /= 10)
	{
		_putchar(((x / z) % 10) + 48);
	}
}
