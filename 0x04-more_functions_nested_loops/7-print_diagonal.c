#include "main.h"
#include <stdio.h>
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times the character \ should be printed
*/
void print_diagonal(int n)
{
if (n <= 0)
{
putchar('\n'); /* print newline */
}
else
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
putchar(' '); /* print spaces before the diagonal */
}
putchar('\\'); /* print diagonal */
putchar('\n'); /* print newline */
}
}
}
