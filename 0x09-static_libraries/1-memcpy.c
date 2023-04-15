#include "main.h"
#include <stddef.h>
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: the memory area to copy to
 * @src: the memory area to copy from
 * @n: the number of bytes to copy
 *
 * Return: a pointer to dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
unsigned char *d = dest;
const unsigned char *s = src;
while (n--)
*d++ = *s++;
return (dest);
}
