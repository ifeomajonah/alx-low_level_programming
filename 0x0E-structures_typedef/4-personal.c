#include <stdlib.h>
#include "dog.h"

/**
 * lengthen - function that creates a new dog
 * @n: first member
 *
 * Return: return int
 */

int lengthen(char *n)
{
	int i = 0;

	while (*n != '\0')
	{
		i++;
		n++;
	}
	return (i);
}

/**
 * loopseen - function that loops through
 * @lop: pointer to copy into
 * @loop: pointer to copy from
 * @size: size to copy
 *
 * Return: void
 */

void loopseen(char *lop, char *loop, int size)
{
	int i = 0;

	for (; i < size; i++)
		lop[i] = loop[i];

	lop[i] = '\0';
}


/**
 * new_dog - function that creates a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: return dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *n_store, *o_store;
	int name_num = lengthen(name);
	int owner_num = lengthen(owner);
	dog_t *new_dog;

	new_dog = (dog_t *)malloc(sizeof(dog_t));

	n_store = (char *)malloc((sizeof(char) * name_num) + 1);
	o_store = (char *)malloc((sizeof(char) * owner_num) + 1);

	if (n_store == NULL || o_store == NULL)
		return (NULL);

	loopseen(n_store, name, name_num);
	loopseen(o_store, owner, owner_num);

	new_dog->name = n_store;
	new_dog->age = age;
	new_dog->owner = o_store;

	return (new_dog);
}
