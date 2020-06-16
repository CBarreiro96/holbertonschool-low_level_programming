#include "holberton.h"
/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i< 11)
	{
		char ABC = 'a';

        while (ABC <= 'z')
        {
                _putchar(ABC);
                ABC++;
        }

	i++;
	_putchar('\n');
	}
}
