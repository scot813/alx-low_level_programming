#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - entry point
 * @b: the value
 *
 * Return: to a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(0);

	return (ptr);
}
