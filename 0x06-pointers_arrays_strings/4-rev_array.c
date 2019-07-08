/**
 * reverse_array - Prints a string
 * @a: char
 * @n: char
 *
 * Return: int
 */
void reverse_array(int *a, int n)
{
	int count;
	int temp;
	int mid;

	mid = n / 2;
	count = 0;
	while (count < mid)
	{
		temp = a[count];
		a[count] = a[n - count - 1];
		a[n - count - 1] = temp;
		count++;
	}
}
