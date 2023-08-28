#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: Buffer with memory address
 * @b: contanst byte to fill mempry with
 * @n: number of of byte to fill memory
 *
 * Return: buffer/char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
