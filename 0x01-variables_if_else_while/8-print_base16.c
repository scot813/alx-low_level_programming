#include <stdio.h>

/**
 * main - print number in base 16
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int lc;
	char la;

	for (lc = 0; lc <= 9; lc++)
		putchar((lc % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);
	putchar('\n');

	return (0);
}
