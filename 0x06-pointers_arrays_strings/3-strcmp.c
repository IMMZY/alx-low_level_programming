#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int res;

	for (res = 0; s1[res] != '\0' || s2[res] != '\0'; res++)
	{
		if (s1[res] != s2[res])
		{
			if (s1[res] < s2[res])
				return (s1[res] - s2[res]);
			else if (s2[res] < s1[res])
				return (s1[res] - s2[res]);
		}
	}
	return (0);
}
