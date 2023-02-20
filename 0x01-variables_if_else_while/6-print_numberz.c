#include <stdio.h>

/**
 * main - number 0 - 9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int lc;

	for (lc = 0; lc <= 9; lc++)
		putchar((lc % 10) + '0');

	putchar('\n');
	return (0);
}
