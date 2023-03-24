#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator:  the string to be printed between numbers
 * @n:  the number of integers passed to the function
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (n != 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d", va_arg(ap, unsigned int));
			if (separator)
				printf("%s", separator);
		}
		printf("%d", va_arg(ap, unsigned int));
	}

	va_end(ap);
	printf("\n");
}
