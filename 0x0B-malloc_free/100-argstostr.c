#include "main.h"
#include <stdlib.h>
/**
* argstostr - Concatenates all the arguments of the program
* @ac: The number of arguments
* @av: An array of strings containing the arguments
*
* Return: A pointer to the new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
int i, j, len = 0, pos = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
/* Calculate the total length of the concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
len++; /* Add space for the newline character */
}
/* Allocate memory for the concatenated string */
str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);
/* Copy the arguments to the concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[pos] = av[i][j];
pos++;
}
str[pos] = '\n'; /* Add the newline character */
pos++;
}
str[pos] = '\0'; /* Add the null terminator */
return (str);
}
