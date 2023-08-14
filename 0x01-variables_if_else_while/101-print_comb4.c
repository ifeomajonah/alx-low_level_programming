#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0 which is a success
 */

int main(void)
{
	int num_, num_two, num;

	for (num = 48; num <= 56; num++)
	{
		for (num_ = num + 1; num_ <= 57; num_++)
		{
			for (num_two = num_ + 1; num_two <= 57; num_two++)
			{
				putchar(num);
				putchar(num_);
				putchar(num_two);

				if (!(num == 55 && num_ == 56 && num_two == 57))
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
