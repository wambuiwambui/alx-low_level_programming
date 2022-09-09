#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (success)
*/
int main(void)
{
	char c;
	for(c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return(0);
}
