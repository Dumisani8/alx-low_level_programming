#include "main.h"
#include <stdio.h>
/**
* print_triangle - Prints a triangle made of '#' characters of a given size
*
* @size: Size of the triangle to be printed
*
* Return: void
*/
void print_triangle(int size)
{
if (size <= 0)
{
putchar('\n'); /* print newline */
}
else
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= i; j++)
{
putchar('#'); /* print hash character */
}
putchar('\n'); /* print newline */
}
}
}
