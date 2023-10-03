#include"main.h"
#include <stdlib.h>

/**
 * _strdup - Copies a string to new allocated space in memory
 *
 * @str: The string to be copied
 *
 * Return: Pointer to allocated memory containing copy of @str (SUCCESS)
 * OR NULL if @str is empty (FAILURE) OR
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *_copy;
	int i;
	int _count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		_count++;

	_copy = malloc(sizeof(char) * _count + 1);

	if (_copy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		_copy[i] = str[i];

	return (_copy);
}
