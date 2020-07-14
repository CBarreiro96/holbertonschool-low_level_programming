#include "dog.h"
#include <stdlib.h>
/**
*new_dog - function that creates a new dog.
*@name: characterr string
*@age:Variable typoe of float
*@owner:character string.
*Return: return value of struct dogger.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dogs;
	char *n; /*Variable to name*/
	char *o; /*Variable to owner*/
	int i, j, a;

	for (i = 0; name[i] ; i++)
		;
	for (j = 0 ; owner[j] ; j++)
		;

	dogs = malloc(sizeof(struct dog));
	if (dogs == NULL)
		return (NULL);

	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(dogs);
		return (NULL);
	}
	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(n);
		free(dogs);
		return (NULL);
	}

	for (a = 0; a <= i; a++)
		n[a] = name[a];
	for (a = 0; a <= j ; a++)
		o[a] = owner[a];

	dogs->name = n;
	dogs->age = age;
	dogs->owner = n;
	return (dogs);
}
