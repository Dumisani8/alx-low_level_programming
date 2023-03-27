#include "main.h"
#include <stdio.h>
/**
* puts_half - prints half of a string, followed by a new line
* @str: pointer to the string
*
* Return: void
*/
void puts_half(char *str)
{
int len, i;
/* Get the length of the string */
for (len = 0; str[len] != '\0'; len++)
;
/* Print the second half of the string */
for (i = len / 2; str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
}
