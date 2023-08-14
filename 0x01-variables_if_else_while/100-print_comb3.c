#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return shows success
 */

int main(void)
{
	int num = 48;
	int j;

	for (num = 48; num <= 56 ; num++)
	{
		for (j = num + 1; j <= 57 ; j++)
		{
			putchar(num);
			putchar(j);
			if (!(num == 56 && j == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
