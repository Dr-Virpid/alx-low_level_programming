#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory manually allocated in the heap
 * @grid: pointer to a 2d array in heap
 * @height: no of arrays in the 2d array
 * Return: none
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height < 1)
return;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
