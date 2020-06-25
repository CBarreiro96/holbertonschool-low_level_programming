#include "holberton.h"
/**
 *cap_string - capital letter
 *@var: Pointer of type char
 *Return: return of variable var.
 */
char *cap_string(char *var)
{
	int i, a;
	char restriccion[] = ",;.!?(){}\n\t\" ";

	for (i = 0 ; var[i] != '\0'; i++)
	{
		for (a = 0; restriccion[a] != '\0'; a++)
		{
			if (restriccion[a] == var[i])
			{
				if (var[i + 1] > 96 && var[i + 1] < 123)
				{
					var[i + 1] -= 32;
				}
			}
		}

	}
	return (var);
}
