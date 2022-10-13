#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @cmp: pointer to the function to be used to compare values
 * @size: is the number of elements in the array array
 * @array: array to be used
 * Return:  index of the first element for which the cmp
 * function does not return 0
 * If no element matches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}
}
