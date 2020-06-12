#include <stdio.h>
/**
 *main - Writing a program that prints numbers from 0 to 99.
 *Return: The value will return 0.
 */

int main(void)
{
int a, b;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
putchar(b + '0');
putchar(a + '0');
if (b == 9 && a == 9)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
