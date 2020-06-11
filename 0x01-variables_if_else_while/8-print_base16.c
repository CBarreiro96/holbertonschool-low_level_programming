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
for (b = '0' ; b <= '9'   ; b++)
{  putchar(b);
}
for (b = 'a' ; b <= 'f'   ; b++)
{  putchar(b);
}
putchar('\n');
return (0);
}
