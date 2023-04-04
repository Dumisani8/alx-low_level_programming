#include "main.h"
/**
* _strpbrk - searches a string for any of a set of bytes
* @s: pointer to the string to search
* @accept: pointer to the string of bytes to search for
*
* Return: pointer to the first matching byte in s, or NULL if no match found
*/
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
return (s);
a++;
}
s++;
}
return (0);
}
