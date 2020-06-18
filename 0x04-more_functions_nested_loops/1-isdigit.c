#include "holberton.h"
/**
 *_isdigit - Identify Number
 *@c: variable type of integer
 *Return:Return 1 or 0 depend of case
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
