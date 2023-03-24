#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format:  list of types of arguments passed to the function
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int k;
	char *str;
	char *ptr;
	va_list ap;

	va_start(ap, format);
	k = 0;
	while (format && format[k])
	{
		ptr = "";
		if (format[k + 1])
			ptr = ", ";
		switch (format[k])
		{

		case 'c':
			printf("%c%s", va_arg(ap, int), ptr);
			break;
		case 'i':
			printf("%d%s", va_arg(ap, int), ptr);
			break;
		case 'f':
			printf("%f%s", va_arg(ap, double), ptr);
			break;
		case 's':
			str = va_arg(ap, char *);
			if (!str || !*str)
				str = "(nil)";
			printf("%s%s", str, ptr);
			break;
		}
		k++;
	}
	printf("\n");
}
