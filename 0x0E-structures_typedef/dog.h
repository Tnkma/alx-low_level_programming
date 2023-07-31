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

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#endif
