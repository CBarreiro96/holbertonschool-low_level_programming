#include "holberton.h"
/**
 *print_line - printf character _
 *@n: Numbre type of integer
 *Description: Only use _puchar
*/
void print_line(int n)
{
	int i;

	i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
}
