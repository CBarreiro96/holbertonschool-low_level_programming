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
		if (var[i] >= 97 && m[i] <= 122)
		{
			if (i == 0)
			{
				m[i] -= 32;
			}
			if (m[i - 1] == ' ' || m[i - 1] == '\t' ||
			     m[i - 1] == '\n' || m[i - 1] == ',' ||
			     m[i - 1] == ';' || m[i - 1] == '.' ||
			     m[i - 1] == '!' || m[i - 1] == '?' ||
			     m[i - 1] == '"' || m[i - 1] == '(' ||
			     m[i - 1] == ')' || m[i - 1] == '{' ||
			    m[i - 1] == '}')
			{
				m[i] -= 32;
			}
		}
		i++;
	}
	return (m);
}
