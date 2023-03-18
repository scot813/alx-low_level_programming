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
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
