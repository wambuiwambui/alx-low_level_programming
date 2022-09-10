#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 *
 * Return: 0 (success)
*/
int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
