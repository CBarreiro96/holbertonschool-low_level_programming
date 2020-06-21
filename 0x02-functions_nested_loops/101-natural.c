#include <stdio.h>

/**
 *main - printf sum of multiples of 3 or 5 until 1024
 *Return: There are not anything.
 */

int main(void)
{
	int c;
	int sum = 0;

	for (c = 0; c < 1024; c++)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum += c;
		}
	}
	printf("%d\n", sum);
	return (0);
}
