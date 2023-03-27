#include "main.h"
#include <stdio.h>
/**
* print_rev - prints a string in reverse, followed by a new line
* @s: pointer to the string
*
* Return: void
*/
void print_rev(char *s)
{
int length = 0;
/* Find length of the string */
while (*s != '\0')
{
length++;
s++;
}
/* Print string in reverse order */
s--;
while (length > 0)
{
putchar(*s);
s--;
length--;
}
putchar('\n');
}
