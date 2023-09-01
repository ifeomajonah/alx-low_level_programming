#include "main.h"

/**
 * _strcpy - copies the string including the terminating null byte
 * @dest: array
 * @src: string
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int g;

	for (g = 0; src[g] != '\0'; g++)
	{
		dest[g] = src[g];
	}

	dest[g++] = '\0';

	return (dest);
}
