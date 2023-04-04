#include "main.h"
/**
* _strstr - locates a substring
* @haystack: pointer to the string to search
* @needle: pointer to the substring to search for
*
* Return: pointer to the beginning of the located substring,
*         or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*h == *n && *n != '\0')
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (0);
}
