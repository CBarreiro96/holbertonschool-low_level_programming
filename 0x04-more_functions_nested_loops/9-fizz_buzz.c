#include <stdio.h>
/**
 *main - Multiple of 3 and 5
 *Return:There is no return value.
 */
int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
