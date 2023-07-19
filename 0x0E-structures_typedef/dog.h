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
	char name[200];
	float age;
	char owner[200];
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
