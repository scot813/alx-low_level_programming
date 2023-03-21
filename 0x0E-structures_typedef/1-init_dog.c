#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - entry point
 * @d: value
 * @name: value
 * @age: third value
 * @owner: fourth value
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;

}
