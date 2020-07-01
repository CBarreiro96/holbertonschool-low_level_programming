#include "holberton.h"
/**
 *_print_rev_recursion - function that prints a string in reverse.
 *@s: Pointer type of char.
 *Return: return anything.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
