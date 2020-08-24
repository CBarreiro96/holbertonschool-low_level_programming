#include <stdio.h>
/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Return: 0
 */
int main(void)
{
	long double a = 1, b = 2;
	long double Temporary;
	int n = 1;

	while (n < 99)
	{
		if (n < 3)
		{
			printf("%d, ", n);
		}
		else if (n < 98)
		{
			printf("%.0Lf, ", a + b);
			Temporary = a;
			a = b;
			b = Temporary + a;
		}
		else
		{
			printf("%.0Lf\n", a + b);
		}
		n++;
	}

	return (0);
}
