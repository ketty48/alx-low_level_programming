#include <stdio.h>

/**
 * main - program that prints all possible different combinations of 3 digits
 * Return: 0
 */
int main(void)
{
int c;
int d = 0;


while (d < 10)
{
if (d != c && d < c)
{
putchar('0' + d);
putchar('0' + c);

if (c != 17)
{
putchar(',');
putchar(' ');
}
}
c++;
}
putchar('\n');
return (0);
}
