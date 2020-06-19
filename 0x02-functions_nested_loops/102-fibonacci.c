#include <stdio.h>
/**
 *main - Fibonacci serie
 *Return: There are not reuturn.
 */
int main(void)
{
	long int Sust;
	long int i = 1;
	long int j = 2;
	int C = 3;

	printf("%lu, ", i);
	while (C <= 50)
	{
		if (C == 50)
		{
			printf("%lu\n", j);
		}
		else
			printf("%lu, ", j);

		Sust = j;
		j += i;
		i = Sust;
	C++;
	}

	return (0);
}
