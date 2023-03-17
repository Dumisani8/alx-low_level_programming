#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
/* Loop through all single digit numbers */
for (i = 0; i < 10; i++)
{
/* Print current number */
putchar(i % 10 + '0');
}
/* Print newline */
putchar('\n');
return (0);
}
