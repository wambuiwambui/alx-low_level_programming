#include <stdio.h>

/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: 0
*/
int main(void)
{
	int i;
	unsigned long n1 = 1, n2 = 2, n3;

	printf("%lu, %lu", n1, n2);

	for (i = 0; i < 96; i++)
	{
		n3 = n1 + n2;
		printf("%lu", n3);
		if (i != 95)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		n1 = n2;
		n2 = n3;
	}
	return (0);
}
