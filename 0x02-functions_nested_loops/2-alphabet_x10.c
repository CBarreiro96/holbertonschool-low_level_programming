#include "holberton.h"
/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ABC;

	while (i < 10)
	{
		ABC = 'a';
		while (ABC <= 'z')
		{
			_putchar(ABC);
			ABC++;
		}
		_putchar('\n');
		i++;
	}
}
