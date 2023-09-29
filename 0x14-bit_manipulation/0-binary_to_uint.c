#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an int
 * @b: binary value
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total, value, result;

	value = 0;
	result = 0;

	if (b == NULL)
		return (0);

	total = _count(b);

	while (*b != '\0')
	{
		if (!(*b == '0' || *b == '1'))
			return (0);

		value = (*b - '0') * (1u << total);
		result += value;
		total--;
		b++;
	}
	return (result);
}

/**
 * _count - function that counts the total in a string
 * @b: binary value
 *
 * Return: unsigned int
 */

unsigned int _count(const char *b)
{
	unsigned int count;

	count = 0;

	while (*b != '\0')
	{
		count++;
		b++;
	}
	return (count - 1);
}
