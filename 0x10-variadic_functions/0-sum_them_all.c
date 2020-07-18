#include "variadic_functions.h"
/**
*sum_them_all - Sum of all its parameters.
*@n: Variable type const unsigned.
*Return: return resutl type int.
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int sum;

	va_start(ap, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
