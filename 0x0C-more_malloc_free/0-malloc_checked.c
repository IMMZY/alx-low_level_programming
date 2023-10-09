#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 * Return: pointer to the allocated memory (SUCCESS)
 * 98 if insufficient memory was available (FAILURE)
 */

void *malloc_checked(unsigned int b)
{
	char *_output;

	_output = malloc(b);
	if (_output == NULL)
		exit(98);

	return (_output);
}
