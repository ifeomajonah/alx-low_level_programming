#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long num = 612852475143;

	for (i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%d", i);
		}
	}
	return (0);
}
