#include "main.h"
#include <stddef.h>
/**
 * _strncat - concatenates two strings up to n bytes of src
 *
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to be used from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, const char *src, size_t n)
{
size_t dest_len = _strlen(dest);
size_t i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
return dest;
}
