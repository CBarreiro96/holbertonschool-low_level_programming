#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two digits.
 * You can only use `putchar`.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int x, y; 
	int a, b, i, j; 
x = 0;
while (x < 100)
{
a = x % 10;
b = x / 10;
y = 0;
while (y < 100)
{
i = y % 10;
j = y / 10;

if (b < j || (b == j && a < i))
{
putchar(b + '0');
putchar(a + '0');
putchar(' ');
putchar(j + '0');
putchar(i + '0');

if (!(b == 9 && a == 8))
{
putchar(',');
putchar(' ');
}
}
y++;
}
x++;
}
putchar('\n');
return (0);
}
