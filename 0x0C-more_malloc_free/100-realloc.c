#ifndef _REALLOC_H_
#define _REALLOC_H_
#include <stdlib.h>  /* for malloc and free */
/**
* _realloc - Reallocates a memory block using malloc and free
* @ptr: A pointer to the memory previously allocated with a call to malloc
* @old_size: The size, in bytes, of the allocated space for ptr
* @new_size: The new size, in bytes, of the new memory block
*
* Return: A pointer to the newly allocated memory block
*         NULL if new_size == 0 and ptr is not NULL or if malloc fails
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}
if (new_size == old_size)
return (ptr);
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
if (new_size > old_size)
new_size = old_size;
for (unsigned int i = 0; i < new_size; i++)
((char *)new_ptr)[i] = ((char *)ptr)[i];
free(ptr);
return (new_ptr);
}
#endif /* _REALLOC_H_ */
