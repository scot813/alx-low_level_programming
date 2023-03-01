#include "main.h"
/**
 * swap_int - swapa the value of two inetgers
 * @a: integer to sawp
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
