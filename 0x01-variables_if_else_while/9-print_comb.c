#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - printing numbers from 0-9 with comas and space between them
 *
 * Description: using the main function
 * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Return: 0
 */
int main(void)
{
int n;
for (n = 48 ; n <= 57 ; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
