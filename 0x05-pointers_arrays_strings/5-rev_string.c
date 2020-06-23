#include "holberton.h"
/**
 *rev_string - Revert the word of string
 *@s:Pointer type char.
 */
void rev_string(char *s)
{
	int i, c, Long;
	char k;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}

	Long = i;

	for (i--, c = 0 ; c <= Long / 2 ; i--, c++)
	{
		k = s[c];
		s[c] = s[i];
		s[i] = k;
	}
}
