#include "main.h"
#include <stdio.h>
/**
* print_square - prints a square of '#' characters of a given size
* @size: size of the square to be printed
*
* Return: void
*/
void print_square(int size)
{
if (size <= 0)
{
putchar('\n'); /* print newline */
}
else
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
putchar('#'); /* print hash character */
}
putchar('\n'); /* print newline */
}
}
}
