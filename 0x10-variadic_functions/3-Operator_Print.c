#include "variadic_functions.h"
/**
 * printint - print int type element from va_list
 * @list: va_list passed to function
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * printfloat - print float type element from va_list
 * @list: va_list passed to function
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * printchar - print char type element from va_list
 * @list: va_list passed to function
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * printstr - print string element from va_list
 * @list: va_list passed to function
 */
void print_string(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

