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
	int i = 0;

	if (dest[i] != '\0')
	{
		for (i = 0; dest[i]; i++)
		{
			_putchar(dest[i]);
		}
	}
	else if (dest[i] == '\0')
	{
		for (i = 0; src[i]; i++)
		{
			_putchar(src[i]);
		}
		src[i] = '\0';
	}

	return (dest);
}
