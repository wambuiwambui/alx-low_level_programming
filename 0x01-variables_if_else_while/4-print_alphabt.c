#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints lower case letters apart from q and e
 *
 * Return: 0 (succes)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != (char)'e' && ch != (char)'q')
		{
			putchar(ch);
		}
	}
	putchar ('\n');
	return (0);
}
