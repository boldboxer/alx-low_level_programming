#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - performs a malloc, if failed exits
 *
 *  @b: number of bytes to allocate
 *
 *  Return: pointer to beginning of new memory
 */
void *malloc_checked(unsigned int b)
{
	void *val;

	val = malloc(b);
	if (val == NULL)
		exit(98);
	return (val);
}
