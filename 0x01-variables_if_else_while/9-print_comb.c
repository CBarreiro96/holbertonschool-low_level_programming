#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 * You are not allowed to use any variable of type char.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` twice.
 * Return: 0
 */
int main(void)
{
int b;
for (b = 0 ; b < 10   ; b++)
{ putchar(b + '0');
if (b != 9)
{ putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

