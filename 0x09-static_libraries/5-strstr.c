#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string to search through
 * @needle: sub string occcurence to search
 *
 * Return: Returns substring, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && haystack[i + j]; j++)
			if (haystack[i + j] != needle[j])
				break;
		if (!needle[j])
			return (haystack + i);
	}
	return ('\0');
}
