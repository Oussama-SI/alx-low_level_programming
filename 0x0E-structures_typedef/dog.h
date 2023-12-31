#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - to define a dog
 * @name: the name of dog
 * @owner: the name of the person
 * @age: the age of dog
 *
 * we are define a primission
 * for this dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
