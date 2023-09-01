#include "main.h"

/**
 * *_strncat - function that concatenates two strings.
 * @dest: destination pf cancatenation
 * @src: source of concatenation
 * @n: integer for number of byte
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int m = 0;
	int i = 0;

	while (dest[i])
	{
		i++;
	}
	for (m = 0; src[m] && m < n; m++)
	{
		dest[i++] = src[m];
	}

	dest[i] = '\0';
	return (dest);
}

