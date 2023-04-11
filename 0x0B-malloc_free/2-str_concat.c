#include "main.h"
#include <stdlib.h>
/**
* str_concat - Concatenates two strings
* @s1: The first string to concatenate
* @s2: The second string to concatenate
*
* Return: A pointer to the concatenated string, or NULL if it fails
*/
char *str_concat(char *s1, char *s2)
{
char *concat;
int len1 = 0, len2 = 0, i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
/* Get the lengths of the strings */
while (s1[len1])
len1++;
while (s2[len2])
len2++;
/* Allocate memory for the concatenated string */
concat = malloc(sizeof(char) * (len1 + len2 + 1));
if (concat == NULL)
return (NULL);
/* Copy the first string into the concatenated string */
for (i = 0; i < len1; i++)
concat[i] = s1[i];
/* Copy the second string into the concatenated string */
for (j = 0; j < len2; j++)
concat[i + j] = s2[j];
/* Add the null terminator */
concat[i + j] = '\0';
return (concat);
}
