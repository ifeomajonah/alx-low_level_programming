#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: buffer
 * @accept: string to compare
 *
 * Return: return an unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int value = 0;

	unsigned int i = 0;
	unsigned int k;


	while (s[i] != '\0' && s[i] != ',')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (s[i] == accept[k])
			{

			value++;

			}
			k++;
		}
	i++;
	}
	return (value);
}
