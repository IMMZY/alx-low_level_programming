#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free functions
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for @ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to new allocated memory
 * NULL, if @ptr is NULL (FAILURE) or
 * NULL, if @new_size == 0 && @ptr != NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
