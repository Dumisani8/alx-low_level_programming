#include "main.h"
#include <stdlib.h>
/**
* free_grid - Frees a 2 dimensional grid previously created by alloc_grid
* @grid: The grid to free
* @height: The height of the grid
*
* Return: void
*/
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
return;
/* Free each row of the grid */
for (i = 0; i < height; i++)
{
if (grid[i] != NULL)
{
free(grid[i]);
grid[i] = NULL;
}
}
/* Free the grid itself */
free(grid);
grid = NULL;
}
