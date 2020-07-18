#include "variadic_functions.h"
/**
*sum_them_all - Sum of all its parameters.
*@n: Variable type const unsigned.
*Return: return resutl type int.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

/*Condition propouse exercise*/
	if (n == 0)
		return (0);

/* Initialize the argument list. */
	va_start(ap, n);

/* Get the next argument value. */
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
/* Clean up. */
	va_end(ap);
/*Return result*/
	return (sum);
}
