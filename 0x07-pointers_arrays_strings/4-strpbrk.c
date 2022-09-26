#include "main.h"
#include <stdio.h>

/**
 * strpbrk - bytes
 * @s: pointer to char
 * @accept: pattern to match against
 * Return: pointer to the first match or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
