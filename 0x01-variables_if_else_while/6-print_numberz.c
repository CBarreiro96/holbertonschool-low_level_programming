#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 * Return: 0
 */
int main(void)
{
  int b;
  for (b = 0 ; b <= 9 ; b++)
    { putchar(b + '0');
    }
  putchar('\n');
  return (0);
}
