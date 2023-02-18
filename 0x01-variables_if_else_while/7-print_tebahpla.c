#include <stdio.h>

/**
 * main - lowercase in reverse order
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
