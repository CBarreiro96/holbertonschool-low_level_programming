#include <stdio.h>
/**
*
*
 */
int main(void)
{ int x, a, b;
x = 0;
while (x < 100)
{
a = x % 10;
b = x / 10;
if (b < a)
{
putchar(b + '0');
putchar(a + '0');
if (x < 89)
{
putchar(',');
putchar(' ');
}
}
x++;
}
putchar('\n');
return (0);
}
