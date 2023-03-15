#include "main.h"
#include <stdlib.h>
/**
 * _strdup - entry point
 * @str: in put value
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ptr;
	int j, i = 0;

	if (str == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
		j++;
	ptr = malloc(sizeof(char) * (j + 1));

	if (ptr == NULL)
		return (NULL);

	for  (i = 0; str[i]; i++)
		ptr[i] = str[i];
	return (ptr);
}

