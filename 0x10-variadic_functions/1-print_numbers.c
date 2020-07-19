#include "variadic_functions.h"
#include <stdio.h>
/**
*print_numbers - prints numbers, followed by a new line.
*@separator: Variable type of const char ','.
*@n:Variable type of cosnt unsigned int (size)
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
/*Inicialice of variable*/
	unsigned int i;

/* Initialize the argument list. */
	va_start(list, n);
/* Loop abput printf number with separator*/
	for (i = 0; i < n ; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
/*Clean up*/
	va_end(list);
}
