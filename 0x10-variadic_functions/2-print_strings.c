#include "variadic_functions.h"
/**
*print_strings - prints strings.
*@separator: Variable type of constant char.
*@n: Variable type constant unsigned integer
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
/*Inicialice of variable*/
	unsigned int i;
/*Variable to stor argumento of list*/
	char *Visualize;

/* Initialize the argument list. */
	va_start(list, n);
/* Loop abput printf number with separator*/
	for (i = 0; i < n ; i++)
	{
		Visualize = va_arg(list, char*);
		if (Visualize == NULL)
			printf("(nil)");
		else
			printf("%s", Visualize);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
/*Clean up*/
	va_end(list);
}
