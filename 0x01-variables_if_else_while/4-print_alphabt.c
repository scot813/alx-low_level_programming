#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'q' && lc != 'e')
			putchar(lc);
	}
	putchar('\n');
	return (0);
}
