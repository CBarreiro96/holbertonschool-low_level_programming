#include "holberton.h"
/**
 *_puts - Printf a string.
 *@str:Pointer of type char
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
