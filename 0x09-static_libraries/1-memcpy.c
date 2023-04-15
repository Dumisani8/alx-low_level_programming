#include <stddef.h>
#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to destination buffer
 * @src: pointer to source buffer
 * @n: number of bytes to copy
 *
 * Return: pointer to destination buffer
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
char *dest_ptr = dest;
const char *src_ptr = src;
while (n--)
*dest_ptr++ = *src_ptr++;
return (dest);
}
