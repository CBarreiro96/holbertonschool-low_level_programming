#include "holberton.h"
/**
 *_puts_recursion - function that prints a string, followed by a new line
 *@s: Pointer of type of char
 *Return: return \n in new line.
 */
void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		return ('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(++s);
	}
}
