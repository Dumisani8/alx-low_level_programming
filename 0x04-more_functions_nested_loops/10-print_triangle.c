#include "main.h"
#include <stdio.h>
/**
* print_triangle - prints a triangle of '#' characters with the specified size
*
* @size: the size of the triangle to be printed
*
* Return: void
*/
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
putchar('\n');
return;
}
for (i = 0; i < size; i++)
{
for (j = 0; j <= i; j++)
{
putchar('#');
}
putchar('\n');
}
}
