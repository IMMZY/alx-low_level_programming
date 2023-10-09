#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to include of @s2
 *
 * Return: newly allocated space in memory;
 * NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m;
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	char *_output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (m = 0; s1[m] != '\0'; m++)
		s1_len++;
	for (m = 0; s2[m] != '\0'; m++)
		s2_len++;

	_output = malloc(sizeof(char) * (s1_len + n) + 1);

	if (_output == NULL)
		return (NULL);

	if (n >= s2_len)
	{
		for (m = 0; s1[m] != '\0'; m++)
			_output[m] = s1[m];
		for (m = 0; s2[m] != '\0'; m++)
			_output[s1_len + m] = s2[m];
		_output[s1_len + m] = '\0';
	}
	else
	{
		for (m = 0; s1[m] != '\0'; m++)
			_output[m] = s1[m];
		for (m = 0; m < n; m++)
			_output[s1_len + m] = s2[m];
		_output[s1_len + m] = '\0';
	}
	return (_output);
}
