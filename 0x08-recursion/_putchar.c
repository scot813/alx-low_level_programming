#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the character to be print
 *
 * Return: on success 1
 *0n error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
