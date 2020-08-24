#include <stdio.h>
/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 1, b = 2;
	unsigned long int Temporary;
	int n = 1;

	while (n < 99)
	{
		if (n < 3)
		{
			printf("%d, ", n);
		}
		else if (n < 98)
		{
			printf("%ld, ", a + b);
			Temporary = a;
			a = b;
			b = Temporary + a;
		}
		else 
		{
			printf("%ld\n", b);
		}
		n++;
	}

	return (0);
}
