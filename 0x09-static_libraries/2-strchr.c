#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: char to search for
 *
 * Return: character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else
		{
			return ('\0');
		}
}
