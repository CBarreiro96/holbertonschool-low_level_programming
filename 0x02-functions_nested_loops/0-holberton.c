#include "holberton.h"
/**
 * main - Print "Holberton" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char Inicio[] = "Holberton";
	int i = 0;

	while (Inicio[i] != '\0')
	{
		_putchar(Inicio[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
