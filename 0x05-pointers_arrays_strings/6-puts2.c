#include "main.h"
#include <stdio.h>
/**
* puts2 - prints every other character of a string, starting with the first
*         character, followed by a new line
* @str: pointer to the string
*
* Return: void
*/
void puts2(char *str)
{
int i;
/* Iterate over the characters in the string */
for (i = 0; str[i] != '\0'; i++)
{
/* Print every other character */
if (i % 2 == 0)
{
putchar(str[i]);
}
}
putchar('\n');
}
