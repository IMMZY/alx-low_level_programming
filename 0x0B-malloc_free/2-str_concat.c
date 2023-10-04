#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings
 *
 * @s1: A string to be concatenated
 *
 * @s2: A string to be concatenated
 *
 * Return: Pointer to newly allocated memory
 * which is equal to @s1 + @s2 (SUCCESS) OR
 * NULL (FAILURE)
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len = 0;
	int s2_len = 0;
	int i;
	char *output;

	if (s1 == NULL)
	{
		return (s1 = "");
	}
	if (s2 == NULL)
	{
		return (s2 = "");
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s1_len++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s2_len++;
	}

	output = malloc(sizeof(char) * (s1_len + s2_len) + 1);

	if (output == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		output[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		output[s1_len + i] = s2[i];
	}
	return (output);
}
