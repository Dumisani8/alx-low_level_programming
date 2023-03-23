#include "main.h"
#include <stdio.h>
/**
* more_numbers - print more numbers
*/
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
putchar('0' + j / 10); /* print the tens digit */
putchar('0' + j % 10); /* print the ones digit */
}
putchar('\n'); /* print a newline */
}
}
