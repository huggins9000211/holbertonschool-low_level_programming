#include "search.h"
#include <stdio.h>

/**
 * printArr - check the code for Holberton School students.
 *
 * @array: test
 * @i1: test
 * @i2: test
 * Return: Always 0.
 */
void printArr(int *array, int i1, int i2)
{
	if (i1 <= i2)
		printf("Searching in array: ");
	while (i1 <= i2)
	{
		printf("%d", array[i1]);
		if (i1 != i2)
			printf(", ");
		i1++;
	}
	printf("\n");
}
/**
 * binarySearchH - check the code for Holberton School students.
 *
 * @arr: test
 * @l: test
 * @r: test
 * @x: test
 * Return: Always 0.
 */
int binarySearchH(int arr[], int l, int r, int x)
{
	printArr(arr, l, r);
	if (r >= l)
	{
		int mid = l + (r - l) / 2;

		if (arr[mid] == x)
			return (mid);

		if (arr[mid] > x)
			return (binarySearchH(arr, l, mid - 1, x));

		return (binarySearchH(arr, mid + 1, r, x));
	}

	return (-1);
}
/**
 * binary_search - check the code for Holberton School students.
 *
 * @array: test
 * @size: test
 * @value: test
 * Return: Always 0.
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == 0)
		return (-1);

	return (binarySearchH(array, 0, size - 1, value));
}
