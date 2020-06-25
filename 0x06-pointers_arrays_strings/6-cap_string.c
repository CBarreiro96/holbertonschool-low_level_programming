#include "holberton.h"
/**
 *cap_string - capital letter
 *@var: Pointer of type char
 *Return: return of variable var.
 */
char *cap_string(char *var)
{
	int i;

	i = 0;
	while (var[i] != '\0')
	{
		if (var[i] >= 97 && var[i] <= 122)
		{
			if (i == 0)
			{
				var[i] -= 32;
			}
			if (var[i - 1] == ' ' || var[i - 1] == '\t' ||
			     var[i - 1] == '\n' || var[i - 1] == ',' ||
			     var[i - 1] == ';' || var[i - 1] == '.' ||
			     var[i - 1] == '!' || var[i - 1] == '?' ||
			     var[i - 1] == '"' || var[i - 1] == '(' ||
			     var[i - 1] == ')' || var[i - 1] == '{' ||
			    var[i - 1] == '}')
			{
				var[i] -= 32;
			}
		}
		i++;
	}
	return (var);
}
