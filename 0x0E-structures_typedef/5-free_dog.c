#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog structure
 * @puppy: The dog structure to free
 */
void free_dog(dog_t *puppy)
{
	if (puppy)
	{
	free(puppy->name);
	free(puppy->owner);
	free(puppy);
	}
}
