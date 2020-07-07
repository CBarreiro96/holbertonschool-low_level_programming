#include <stdio.h>
#include <stdlib.h>
/**
 *main - Minimum number of coins to make change for an amount of money
 *@argc: Argument count.
 *@argv: Argument vector.
 *Return: It return 1 or zero depend of case.
 */
int main(int argc, char *argv[])
{
	int num, count = 0;
	int i;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	while (num > 1)
	{
		for (; cents[i] != '\0'; i++)
		{
			while (num >= cents[i])
			{
				num -= cents[i];
				count++;
			}
		}
	}
	printf("%d\n", count);
	return (0);
}
