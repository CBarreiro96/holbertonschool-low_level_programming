#include "dog.h"
#include <stdlib.h>
/**
*init_dog -nitialize a variable of type struct dog
*@d:Pointer type struct
*@name:character string.
*@age:Variable type float
*@owner:character string.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
