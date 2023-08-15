#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - This will free a memory allocated for a struct dog
 * @d: This is a struct dog to free
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
