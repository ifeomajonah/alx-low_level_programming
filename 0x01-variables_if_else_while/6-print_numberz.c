/* Numberz */
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0 showing success
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');

	return (0);
}
