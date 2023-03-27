#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
* _atoi - convert a string to an integer
* @s: the string to convert
*
* Return: the integer value of the string
*/
int _atoi(char *s)
{
int sign = 1, result = 0, i = 0;
/* skip any leading non-digit characters */
while (s[i] && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign *= -1;
i++;
}
/* parse the digits of the number */
while (s[i] && s[i] >= '0' && s[i] <= '9')
{
/* check for overflow */
if (result > (INT_MAX - (s[i] - '0')) / 10)
{
if (sign == 1)
return (INT_MAX);
else
return (INT_MIN);
}
result = result * 10 + (s[i] - '0');
i++;
}
/* apply the sign and return the result */
return (result * sign);
}
