#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Individual dogs and owners
 * @name: First memeber
 * @age: Second member
 * @owner: Last member
 */

typedef struct dog
{
	/**
	 * @name: name of dog
	 */
	char *name;
	/**
	 * @age: age of dog
	 */
	float age;
	/**
	 * @owner: owner of teh dog
	 */
	char *owner;
}dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

#endif /* DOG_H */
