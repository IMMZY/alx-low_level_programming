#include "main.h"
#include <stdio.h>

/**
* _strspn - Gets the length of a prefix substring.
*
* @s: String where substring will look.
* @accept: Substring of accepted chars.
*
* Return: Length of occurrence.
*/

unsigned int _strspn(char *s, char *accept)
{
	int m, n;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; accept[n] != s[m]; n++)
		{
			if (accept[n] == '\0')
				return (m);
		}

	}

	return (m);

}
