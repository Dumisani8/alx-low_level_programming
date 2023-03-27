#include "main.h"
#include <stdio.h>
/**
* puts_half - print the second half of a string
* @str: the string to print
*/
 void puts_half(char *str)
{
int length = 0, i;
/* find the length of the string */
while (str[length] != '\0')
length++;
/* print the second half of the string */
for (i = (length + 1) / 2; i < length; i++)
putchar(str[i]);
putchar('\n');
}
