#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: 0 (success)
*/
int main(void)
{
	int n, m;

	for (n = 0; n <= 8; n++)
	{
		for (m = 1; m <= 9; m++)
		{
			if (m > n)
			{
				putchar(n % 10 + '0');
				putchar(m % 10 + '0');
				if (n != 8 || m != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}



