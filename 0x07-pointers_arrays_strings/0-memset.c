#include "main.h"
/**
 * _memset - fill a block of memeory with a constant value
 * @s: initial address of the memory to be filled
 * @b: the constant value
 * @n: number of byte to chnange
 *
 * Return: changed array with the new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
