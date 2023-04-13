#ifndef _CALLOC_H_
#define _CALLOC_H_
#include <stdlib.h>  /* for malloc */
/**
* _calloc - Allocates memory for an array using malloc
* @nmemb: the number of elements in the array
* @size: the size of each element in bytes
*
* Return: A pointer to the allocated memory block
*         NULL if the function fails or nmemb or size is 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
ptr[i] = 0;
return ((void *) ptr);
}
#endif /* _CALLOC_H_ */
