#include <stdio.h>
/**
* main - prints the alphabet in lowercase, except 'q' and 'e', followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 97; i <= 122; i++)
{
if (i != 101 && i != 113)
{
putchar(i);
}
}
putchar('\n');
return (0);
}