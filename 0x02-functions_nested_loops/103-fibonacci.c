#include <stdio.h>
/**
 * main - main block
 * Description: Print the sum of par fibanacci number.
 * Return: 0
 */
int main(void)
{
	long int i = 1, j = 2, Sumpar = 0;
	long int Suplent;

	while (j < 4000000)
	{
		if (j % 2 == 0)
		{
			Sumpar += j;
		}

		Suplent = j;
		j += i;
		i = Suplent;
	}
	printf("%lu\n", Sumpar);

	return (0);
}
