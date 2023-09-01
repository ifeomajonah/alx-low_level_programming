#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: destination character
 * @src: source string to add
 *
 * Return: caracter
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int i = 0;

	while (dest[i])
	{
		i++;
	}

	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
