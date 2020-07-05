#include "holberton.h"
#include <stdio.h>
/**
 *main - program that prints all arguments it receives
 *@argc: argument count.
 *@argv: argument vector. Array of string
 *Return: return is 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
