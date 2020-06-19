#include <stdio.h>
/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Return: 0
 */
int main(void)
{
	int C = 2;
	long int i = 1, j = 2;
	long int Suplent;

	printf("%lu, ", i);
	while (C <= 50)
	{
		if (C == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		Suplent = j;
		j += i;
		i = Suplent;
		C++;
	}

	return (0);
}
