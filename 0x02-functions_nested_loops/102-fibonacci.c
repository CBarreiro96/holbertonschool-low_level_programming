#include <stdio.h>
/**
 *main - Fibonacci serie
 *Return: There are not reuturn.
 */
int main(void)
{
	int i = 0;
	int a[51];
	int j = 0;

	while (i <= 50)
	{
		if (i > 1)
		{
			a[i] = a[i - 1] + a[i - 2];
		}
		else
			a[i] = i;
		i++;
	}

	while (j <= 50)
	{
		printf("%d", a[j]);
		printf(" ");
		j++;
	}
	return (0);
}
