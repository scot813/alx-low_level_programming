#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - entry point
 * @width: input
 * @height: input
 *
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	s = (int **) malloc(sizeof(int *) * height);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		s[i] = (int *) malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			free(s);
			for (j = 0; j <= i; j++)
				free(s[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}

