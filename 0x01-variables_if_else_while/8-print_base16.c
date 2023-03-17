#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
/* Print 0-9 */
for (i = 0; i < 10; i++)
{
/* Print current digit */
putchar(i + '0');
}
/* Print a-f */
for (i = 0; i < 6; i++)
{
/* Print current letter */
putchar(i + 'a');
}
/* Print newline */
putchar('\n');
return (0);
}
