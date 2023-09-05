#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars, and initializes it with a char
 * @size: size of array
 * @c: characters in c
 *
 * Return: return char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	str = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return ('\0');
	}
	else if (size > 0)
	{
		for (; i < size; i++)
		{
			str[i] = c;
		}
		str[i] = '\0';
		return (str);
	}
	else if (str == NULL)
	{
		return (NULL);
	}

		return ('\0');
	free(str);
}
