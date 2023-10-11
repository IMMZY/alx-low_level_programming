#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array to search from
 * @size: size of array
 * @cmp: function pointers
 * Return: index of the matched character or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (m = 0; m < size; m++)
	{
		if ((*cmp)(array[m]) == 1)
			return (m);
	}
	return (-1);
}
