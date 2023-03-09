#include "main.h"
/**
 * factorial - entry point
 * @n: input value
 *
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
