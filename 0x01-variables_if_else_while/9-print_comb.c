#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *Description: Using the main function
 *this program prints "1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Return: 0 (success)
*/
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x % 10 + '0');
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
