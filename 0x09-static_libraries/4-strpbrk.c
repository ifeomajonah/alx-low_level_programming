#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search through
 * @accept: string to accept
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int k;

	while (s[i] != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (s[i] == accept[k])
			{
				return (&s[i]);
			}
			k++;
		}
		i++;
	}

	return ('\0');
}

