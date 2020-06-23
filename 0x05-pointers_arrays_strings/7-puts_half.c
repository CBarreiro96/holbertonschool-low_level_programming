#include "holberton.h"
/**
 *puts_half - printf half of string
 *@str: pointer tyṕe of char.
 */
void puts_half(char *str)
{
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	for (i = i / 2; str[i] != 0 ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
