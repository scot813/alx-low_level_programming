#include "main.h"
#include <stdlib.h>
/**
 * str_concat - entry point
 * @s1: input value
 * @s2: input value
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i = 0, r = 0, j = 0, l = 0;

	while (s1 && s1[j])
		j++;
	while (s2 && s2[l])
		l++;

	ptr = malloc(sizeof(char) * (j + l + 1));
	if (ptr == NULL)
		return (NULL);

	i = 0;
	r = 0;

	if (s1)
	{
		while (i < j)
		{
			ptr[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < j + l)
		{
			ptr[i] = s2[r];
			i++;
			r++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
