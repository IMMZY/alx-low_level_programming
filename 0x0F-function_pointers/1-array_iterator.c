#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function as a parameter on each
 * element of an array
 *
 * @array: array of parameters
 *
 * @size: size of array
 *
 * @action: a pointer to the function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array == NULL || action == NULL)
		return;

	for (m = 0; m < size; m++)
		(*action)(array[m]);
}
