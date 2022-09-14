#include "main.h"

/**
 * print_times_table - function that prints the n times table
 * @n: the integer we will use for the urgument function
 *
 * Return: 0
*/
void print_times_table(int n)
{

	for (n = 0; n <= 15; n++)
	{
		_putchar("%d x %d = %d\n", num, num * n % 10);
	}
}
