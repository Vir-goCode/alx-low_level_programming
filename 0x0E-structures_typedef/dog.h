#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;

printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
