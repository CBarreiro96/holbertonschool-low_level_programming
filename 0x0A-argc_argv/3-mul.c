#include "holberton.h"
#include <stdio.h>
# include <stdlib.h>
/**
  *main - program that multiplies two numbers
  *@argc:argument count
  *@argv:argument vector. array of stirng
  *Return: return 1 or 0.
  */
int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
