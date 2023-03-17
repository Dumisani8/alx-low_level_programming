#include <stdio.h> 
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
/* Loop through lowercase alphabet backwards */
for (i = 'z'; i >= 'a'; i--)
{
/* Print current character */
putchar(i);
}
/* Print newline */
putchar('\n');
return (0);
}
