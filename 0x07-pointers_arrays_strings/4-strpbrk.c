#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 *
 * @s: Character to check
 *
 * @accept: Character to look for
 *
 * Return: Null
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *c = accept;

		while (*c != '\0')
		{
			if (*s == *c)
			{
				return (s);
			}
			c++;
		}
		s++;
	}
	return (NULL);
}
