#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entyr point
 * @argc: number of arguements
 * @argv: array og arguement
 *
 * Return: zero for succes
 */

int main(int argc, char *argv[])
{
	char operator = *argv[2];
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int (*calc)(int, int);
	int result;

	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	calc = get_op_func(argv[2]);

	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((num2 == 0) && (operator == '/' || operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	result = calc(num1, num2);
	printf("%d\n", result);

	return (0);
}
