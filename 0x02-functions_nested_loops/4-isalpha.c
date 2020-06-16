#include "holberton.h"
/**
 * _isalpha - Return 1 if letter is lowercase, 0 if not.
 * @c:char type letter
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
