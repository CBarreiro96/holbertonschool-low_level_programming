#include "holberton.h"
/**
 *_isupper - Identify variable
 *@c: int type number
 *Return: identify 1 or 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);

}
