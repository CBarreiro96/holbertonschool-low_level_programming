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
	struct dog *dogger;
	char *n; /*Variable to name*/
	char *o; /*Variable to owner*/
	int i, j, a, b;

	for (i = 0; name[i] ; i++)
		;
	for (j = 0 ; owner[j] ; j++)
		;
	dogger = malloc(sizeof(struct dog));
	if (dogger == NULL)
		return (NULL);
	n = malloc((i + 1) * sizeof(char));
	if (n == NULL)
	{
		free(dogger);
		return (NULL);
	}
	o = malloc((j + 1) * sizeof(char));
	if (o == NULL)
	{
		free(n);
		free(dogger);
		return (NULL);
	}
	for (a = 0; a <= i; a++)
		n[a] = name[a];
	for (b = 0; b <= j ; b++)
		o[b] = owner[b];
	dogger->name = n;
	dogger->age = age;
	dogger->owner = n;
	return (dogger);
}
