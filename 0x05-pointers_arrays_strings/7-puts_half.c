#include "holberton.h"
/**
 *puts_half - printf half of string
 *@str: pointer tyṕe of char.
 *Description: If odd number of chars, print (length - 1) / 2
*/
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	i += 1;
	for (i = (i - 1) / 2; str[i] != 0 ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
