#include "main.h"
#include <stdio.h>
/**
 * print_times_table - times table function
 * @n: interger to return
 *
 */
void print_times_table(int n)
{
int prod;
int i;
int j;
if (n <= 15 && n >= 0)
{
for (j = 0; i <= n; j++)
{
int prod = (j * i);
if (j == 0)
{
_putchar('0');
}
else if (prod <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar('0' + prod);
}
else if (prod > 99)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (prod / 100));
_putchar('0' + ((prod / 10) % 10));
_putchar('0' + (prod % 10));
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + (prod / 10));
_putchar('0' + (prod % 10));
}
_putchar('\n');
}
}
}
