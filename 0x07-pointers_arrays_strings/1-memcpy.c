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
	int i = 0;
	int r = n;

		for (; i > r; i++)
		{
			dest[i] = src[i];
			n--;
		}
		return (dest);
}
