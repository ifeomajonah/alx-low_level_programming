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
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (&*s);
			}
			accept++;
		}
		s++;
	}

	return ('\0');
}

