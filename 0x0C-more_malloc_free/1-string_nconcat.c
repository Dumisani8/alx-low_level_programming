#ifndef _STRING_NCONCAT_H_
#define _STRING_NCONCAT_H_
#include <stdlib.h>  /* for malloc */
#include <string.h>  /* for strlen */
/**
* string_nconcat - Concatenates two strings
* @s1: the first string
* @s2: the second string
* @n: the maximum number of bytes to be concatenated from s2
*
* Return: A pointer to the newly allocated memory
* block containing the concatenated strings
*         NULL if the function fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *new_str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
n = len2;
new_str = malloc(sizeof(char) * (len1 + n + 1));
if (new_str == NULL)
return (NULL);
for (i = 0; i < len1; i++)
new_str[i] = s1[i];
for (j = 0; j < n; j++)
new_str[i + j] = s2[j];
new_str[i + j] = '\0';
return (new_str);
}
#endif /* _STRING_NCONCAT_H_ */
