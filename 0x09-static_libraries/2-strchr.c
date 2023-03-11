#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @c: the character to be located
 * @s: the string where the char is located
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
