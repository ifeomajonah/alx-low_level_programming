#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: Destination pointer
 * @src: source of array
 * @n: number of byte
 *
 * Return: return character
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int dl = 0;

	while (src[i++])
		dl++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = dl; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
