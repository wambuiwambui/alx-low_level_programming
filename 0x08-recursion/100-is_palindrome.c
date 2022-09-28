#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome, 0 otherwise
 * @s: string
 *
 * Return: 1 if a string is a palindrome,0 otherwise
*/
int is_palindrome(char *s)
{
	int tag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &tag);
	return (tag);
}

/**
 * check - checks if string is a palindrome
 * @tag: indicates if a string is a palindrome
 * @first: first index
 * @end: end index
 * @s: string
 *
 * Return: void
*/
void check(char *s, int first, int end, int *tag)
{
	if (first <= end)
	{
		if (s[first] == s[end])
			*tag *= 1;
		else
			*tag *= 0;
	}
}

/**
 * _strlen_recursion - calculates length of a string
 * @s: string
 *
 * Return: length of string
*/
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
