#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2 dimensional array of integers
 *
 * @width: Width/rows of the 2D array
 *
 * @height: Height/columns of the 2D array
 *
 * Return: Pointer to a 2 dimenstional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **output;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	output = malloc(sizeof(int *) * height);

	if (output == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		output[i] = malloc(sizeof(int) * width);

		if (output[i] == NULL)
		{
			free(output);
			for (j = 0; j <= height; j++)
			{
				free(output[j]);
			}
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			output[i][j] = 0;
		}
	}
	return (output);
}
