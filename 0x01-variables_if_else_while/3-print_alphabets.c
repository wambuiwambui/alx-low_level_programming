#include <stdio.h>

/**
 * main - The program prints the alphabet in lowercase, and then in uppercase, followed by a new line
 *
 * Return: 0 (success)
*/
int main(void)
{
	char x;
	for(x = 'a' ; x <= 'z' ; x++)
	{
		putchar(x);
	}
	for(x = 'A' ; x <= 'Z' ; x++)
	{
		putchar(x);
	putchar('\n');
	return (0);
}
