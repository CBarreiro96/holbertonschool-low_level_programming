#include <stdio.h>
/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Return: 0
 */
int main(void)
{
	unsigned long FirstNumber = 0, SecondNumber = 1, SecondPart_Solution;
	unsigned long Sum, FirstPart1, SecondPart1, FirstPart2, SecondPart2, carry;
	int Count = 1;
/*Printf first 91 number of fibonacci*/
/*After 91 unisgned long can't print all number of fibonacci*/
	for (; Count <= 91 ; Count++)
	{
		Sum = FirstNumber + SecondNumber;
		FirstNumber = SecondNumber;
		SecondNumber = Sum;
		printf("%lu, ", Sum);
	}
	/*Divide of number*/
	FirstPart1 = FirstNumber / 100000;
	SecondPart1 = FirstNumber % 100000;
	FirstPart2 = SecondNumber / 100000;
	SecondPart2 = SecondNumber % 100000;
/*print number after 98*/
	for (; Count < 99 ; Count++)
	{
		carry = (SecondPart1 + SecondPart2) / 100000;
		SecondPart_Solution = (SecondPart1 + SecondPart2) - (carry * 100000);
		Sum = (FirstPart1 + FirstPart2) + carry;
		SecondPart1 = SecondPart2;
		SecondPart2 = SecondPart_Solution;
		FirstPart1 = FirstPart2;
		FirstPart2 = Sum;

		if (Count == 98)
		{
			printf("%lu%lu\n", Sum, SecondPart_Solution);
		}
		else
		{
			printf("%lu%lu, ", Sum, SecondPart_Solution);
		}
	}
	return (0);
}
