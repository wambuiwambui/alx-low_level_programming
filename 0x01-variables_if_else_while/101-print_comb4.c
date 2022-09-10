#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: display triple digits and,
 *
 * Return: 0 (success)
*/
int main(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 1; y < 10; y++)
		{
			for (z = 2; z < 10; z++)
			{
				if (z > y && y > x)
				{
				putchar(z % 10 + '0');
				putchar(y % 10 + '0');
				putchar(x % 10 + '0');
				if (x != 0 || y != 1)
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

