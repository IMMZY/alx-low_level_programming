#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc, and initializes to 0
 * @nmemb: number of elements of the array
 * @size: size of each element of the array
 * Return: pointer to the allocated memory (SUCCESS) or
 * NULL if @nmemb or @size is 0 (FAILURE) or
 * NULL if insufficient memory was available (FAILURE)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *_output;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	_output = calloc(nmemb, size);

	if (_output == NULL)
	{
		return (NULL);
	}
	else
	{
		return (_output);
	}
}
