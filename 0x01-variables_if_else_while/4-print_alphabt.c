#include <stdio.h>
/**
 * main - main block
 * use of putchar
 * Return: 0
 */
int main(void)
{
char b;
for (b = 'a'; b < 'z' ; b++)
{
if (b != 'q' && b != 'e')
putchar(b);
}
putchar('\n');
return (0);
}