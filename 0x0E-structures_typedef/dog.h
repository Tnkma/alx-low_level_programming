#ifndef HEADER_H
#define HEADER_H

/**
 * struct dog - short description
 * @name: first memeber
 * @age: second member
 * @owner: third member
 *
 * Description: Longer ones
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
