#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - Allocates memory using malloc
* @b: The amount of memory to allocate
*
* Return: A pointer to the allocated memory
*         Exit with a status value of 98 if malloc fails
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
