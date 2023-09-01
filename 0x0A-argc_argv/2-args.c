#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argv: pointer to arguement string
 * @argc: pointer array size
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
