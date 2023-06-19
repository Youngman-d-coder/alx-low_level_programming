#ifndef DOG_H
#define DOG_H

/* =================================================================== */
/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* =================================================================== */
/* Structures */

/**
 * struct dog - dog basic info
 *
 * @name: dog name
 *
 * @age: dog age
 *
 * @owner: owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new type of dog
 */
typedef struct dog dog_t;

/* =================================================================== */
/* Portfolios */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);



#endif /* DOG_H */
