#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return to 0 value
 */

int main(void)
{
	int num, num_, num_one, num_two;
	
	for(num = 48; num <= 57; num++)
	{
		for (num_ = num + 1; num_ <= 57; num_++)
		{
			
			for (num_one = 48; num_one <= 57; num_one++)
			{
				for (num_two = num_one + 1; num_two <= 57; num_two++)
				{
					putchar(num);
					putchar(num_);
					putchar(' ');
					putchar(num_one);
					putchar(num_two);

					if (!(num == 57 && num_ == 56 && num_one == 57 && num_two == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
