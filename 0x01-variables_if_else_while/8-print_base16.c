/* Hexadecimal */
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0
 */

int main(void)
{
	int nam = 0;
	char lowercase = 'a';

	while (nam < 10)
	{
		putchar('0' + nam);
		nam++;
	}
	while (lowercase < 'g')
	{
		putchar(lowercase);
		lowercase++;
	}
	putchar('\n');
	return (0);
}
