#include "main.h"
/**
* _atoi - Converts a string to an integer.
* @s: The string to be converted.
*
* Return: The integer value of the converted string.
*/
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
result = result * 10 + (s[i] - '0') * sign;
if (result != 0 && (s[i] < '0' || s[i] > '9'))
break;
i++;
}
return (result);
}
