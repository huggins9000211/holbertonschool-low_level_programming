#include <stdio.h>
#include <stdlib.h>
/**
* main - Prints a string
* @argc: char
* @argv: char
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
	for(i = 0; i < height; i++)
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
