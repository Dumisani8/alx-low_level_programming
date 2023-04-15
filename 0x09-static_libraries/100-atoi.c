#include <stddef.h>
#include "main.h"
/**
 * _atoi - Convert a string to an integer
 * @s: String to be converted
 *
 * Return: The integer value of the converted string
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;
/* Handle leading spaces */
while (s[i] == ' ')
{
i++;
}
/* Handle sign */
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
sign = 1;
i++;
}
/* Handle digits */
while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}
return sign * result;
}
