#include <stdio.h>
/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Return: 0
 */
int main(void)
{
	long int a = 1, b = 2;
	long int Temporary;
	
	
	for(int n = 1; n< 99;n++)
	{
		if(n < 3)
		{
			printf("%d, ",n);
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
	}

	return (0);
}
