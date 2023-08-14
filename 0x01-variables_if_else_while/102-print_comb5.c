#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return to 0 value
 */

int main(void)
{
	int num, num;

	for (num = 0; num < 100; num++)
	{
		for (num_ = 0; num_ < 100; num_++)
		{
			if (num < num_)
			{
				putchar((num / 10) + 48);
				putchar((num % 10) + 48);
				putchar(' ');
				putchar((num_ / 10) + 48);
				putchar((num_ % 10) + 48);
				if (num != 98 || num_ != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
