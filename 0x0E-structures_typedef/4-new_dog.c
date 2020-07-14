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
	struct dog *Newdog;
	int i, j, a;
	char *Copyname, *Copyowner;

	Newdog = malloc(sizeof(struct dog));
	if (Newdog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	Copyname = malloc(sizeof(char) * i + 1);
	if (Copyname == NULL)
	{
		free(Newdog);
		return (NULL);
	}
	Copyowner = malloc(sizeof(char) * j + 1);
	if (Copyowner == NULL)
	{
		free(Copyname);
		free(Newdog);
		return (NULL);
	}
	for (a = 0; a <= i; a++)
		Copyname[a] = name[a];
	for (a = 0; a <= j; a++)
		Copyowner[a] = owner[a];

	Newdog->name = Copyname;
	Newdog->age = age;
	Newdog->owner = Copyowner;

	return (Newdog);
}
