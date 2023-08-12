/* Smile in the mirror */
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0
 */

int main(void)
{
	char lowercase = 'z';

	while (lowercase >= 'a')
	{
		putchar(lowercase);
		lowercase--;
	}
	putchar('\n');

	return (0);
}
