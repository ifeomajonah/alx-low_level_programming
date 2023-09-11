#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: point to struct dog
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", (d->name == NULL) ? d->name : "(nil)");
	printf("Age: %f\n", (d->age == 0.0) ? d->age : 0.0);
	printf("Owner: %s\n", (d->owner == NULL) ? d->owner : "(nil)");
}
