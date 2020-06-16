#include "holberton.h"
/**
 *main - identificartion lowercase
 *Returne 1 if it si lowercase else 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
		return (0);
}
