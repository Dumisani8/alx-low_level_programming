#ifndef _ARRAY_RANGE_H_
#define _ARRAY_RANGE_H_
#include <stdlib.h>  /* for malloc */
/**
* array_range - Creates an array of integers
* @min: the minimum value to be included in the array
* @max: the maximum value to be included in the array
*
* Return: A pointer to the newly created array
*         NULL if min > max or if malloc fails
*/
int *array_range(int min, int max)
{
int *arr;
int i, len;
if (min > max)
return (NULL);
len = max - min + 1;
arr = malloc(sizeof(int) * len);
if (arr == NULL)
return (NULL);
for (i = 0; i < len; i++)
arr[i] = min++;
return (arr);
}
#endif /* _ARRAY_RANGE_H_ */
