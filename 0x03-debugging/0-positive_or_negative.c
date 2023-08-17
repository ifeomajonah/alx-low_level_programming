/* Positive Programming */
#include <stdlib.h>
#include "main.h"



/**
 * positive_or_negative - entry point of function
 *
 * Description: function creates a random number
 * output is dependent on the random number
 * condition is displayed using if else statement
 * Return: return 0
 *
 */

void positive_or_negative(int i)
{


	
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}

}
