#include <stdio.h>
/**
 *main - Fibonacci serie
 *Return: There are not reuturn.
 */
int main(void)
{
	int i = 1;
	int a[50];
	int j = 0;

	while (i <= 51)
	{
		if (i > 2)
		{
			a[i-1] = a[i - 2] + a[i - 3];
		}
		else
			a[i-1] = i;
		i++;
	}

	while (j <= 50)
	{
		printf("%d", a[j]);
		if(j!=50)
		{
			printf(",");
			printf(" ");
		}
		else
			printf("\n");
		j++;
	}
	return (0);
}
