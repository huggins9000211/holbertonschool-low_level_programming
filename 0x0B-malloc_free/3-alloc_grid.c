#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - Prints a string
* @width: char
* @height: char
*
* Return: int
*/
int **alloc_grid(int width, int height)
{
	int *ptr;
	int **arr;
	int len;
	int i;
	int x;

	len = sizeof(int *) * height + sizeof(int) * width * height;
	arr = (int **)malloc(len);

	ptr = (int *)(arr + height);
	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = (ptr + width * i);
	}


	for (i = 0; i < height; i++)
	{
		for (x = 0; x < width; x++)
		{
			arr[i][x] = 0;
		}
	}
	return (arr);
}
