#include "main.h"

/**
 * is_prime_number - returns 1 if n is prime, otherwise return 0
 * @n: the number to be checked
 *
 * Return: 1 if n is prime, otherwise return 0.
*/
int is_prime_number(int n)
{
	int first = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, first));
}

/**
 * is_prime - returns 1 if n is prime, otherwise return 0
 * @n: number to be checked
 * @first: number to start checking from
 *
 * Return: 1 if n is  prime number, otherwise return 0
*/
int is_prime(int n, int first)
{
	if (first <= 1)
		return (1);
	else if (n % first == 0)
		return (0);
	return (is_prime(n, first - 1));
}
