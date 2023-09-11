#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Individual dogs and owners
 * @name: First memeber
 * @age: Second member
 * @owner: Last member
 */

struct dog
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
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
