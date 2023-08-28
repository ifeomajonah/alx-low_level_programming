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
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
