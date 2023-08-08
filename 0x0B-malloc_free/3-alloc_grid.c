#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - its a nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
int **ant;
int x, y;
if (width <= 0 || height <= 0)
return (NULL);
ant = malloc(sizeof(int *) * height);
if (ant == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
ant[x] = malloc(sizeof(int) * width);
if (ant[x] == NULL)
{
for (; x >= 0; x--)
free(ant[x]);
free(ant);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
ant[x][y] = 0;
}
return (ant);
}
