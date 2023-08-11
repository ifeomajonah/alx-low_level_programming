/* printing numbers */
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: function that prints
 * all single digit number of base 10
 * Return: return 0 for success
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
