#include <stddef.h>
#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of characters to concatenate from src
 *
 * Return: pointer to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_ptr = dest;
while (*dest_ptr)
dest_ptr++;
while (n-- && *src)
*dest_ptr++ = *src++;
*dest_ptr = '\0';
return (dest);
}
