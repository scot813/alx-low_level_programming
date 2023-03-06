#include "main.h"
/**
 * _memcpy - a function to opy memory
 * @dest: where the memory is stored
 * @src: where the memory is copied
 * @n: number of byte
 *
 * Return: the copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

		for (; r > i; r++)
		{
			dest[r] = src[r];
			n--;
		}
		return (dest);
}
