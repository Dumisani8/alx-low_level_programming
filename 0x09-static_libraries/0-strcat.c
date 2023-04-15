#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: the destination string to append to
 * @src: the source string to append from
 *
 * Return: a pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{
/* Do nothing, just iterate to the end of dest */
}
for (j = 0; src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
