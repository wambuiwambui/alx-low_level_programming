#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 * @array: A pointer to the first element of the array to search
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where value is located, or -1 if not found or
 *         array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev = 0;

    if (array == NULL)
        return (-1);

    while (array[prev] < value)
    {
        size_t curr = fmin(size - 1, prev + step);

        if (array[curr] >= value)
        {
            printf("Value found between indexes [%ld] and [%ld]\n", prev, curr);
            break;
        }

        prev = curr;
        printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

        if (prev == size - 1)
            return (-1);
    }

    while (array[prev] < value)
    {
        prev++;
        if (prev == fmin(size, prev + step))
            return (-1);
    }

    if (array[prev] == value)
    {
        printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
        return (prev);
    }

    return (-1);
}
