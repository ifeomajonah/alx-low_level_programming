/* Programming in C*/
#include <stdio.h>

/**
 * main - indicates entry point for program
 *
 * sizeof - this calculates teh size in nytes of its operand
 * Return: returns 0 which is succesful
 */

int main(void)
{
	char c;
	int i;
	double d;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long long int: %zu byte(s\n", sizeof(d));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
