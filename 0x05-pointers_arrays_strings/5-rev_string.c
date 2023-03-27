#include "main.h"
/**
* rev_string - reverses a string
* @s: pointer to the string
*
* Return: void
*/
void rev_string(char *s)
{
int length = 0, i;
char temp;
/* Find length of the string */
while (s[length] != '\0')
{
length++;
}
/* Swap characters from start and end */
for (i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}
