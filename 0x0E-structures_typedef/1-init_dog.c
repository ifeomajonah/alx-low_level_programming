#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @d: struct dog variable
 * @name: First memeber
 * @age: Second member
 * @owner: Third member
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
