#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main-program that adds positive numbers.
 *@argc: Argument count.
 *@argv: Argument vector, arrayu of string.
 *Return: return 1 or 0 depend of case.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *ID;
	int num;
	int i;

	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &ID, 10);

			if (!*ID)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
