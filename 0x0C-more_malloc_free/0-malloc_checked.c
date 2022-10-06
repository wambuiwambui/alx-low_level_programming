#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b:memory size to  be :xallocate
 *
 * Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == Null)
		exit(98);
	return (p);
}
