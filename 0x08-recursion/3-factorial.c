#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number
 *
 * Return: factorial of a number.
*/
int factorial(int n)
{
	int my_factorial;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	my_factorial = factorial(n - 1);
	return (n * my_factorial);
}
