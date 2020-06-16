#include "holberton.h"
/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: 0
 */
void print_alphabet(void)
{
	char ABC = 'a';

	while (ABC <= 'z')
	{
		_putchar(ABC);
		ABC++;
	}
	_putchar('\n');
}
