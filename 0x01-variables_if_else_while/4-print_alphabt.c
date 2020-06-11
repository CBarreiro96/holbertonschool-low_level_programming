#include <stdio.h>
/**
 * main - main block
 * use of putchar
 * Return: 0
 */
int main(void)
{
char b;
while (b < 'z')
{
if (b != 'q' && b != 'e')
putchar(b);
b++;
}
putchar('\n');
return (0);
}
