#include <stdio.h>
/**
 * main - Prints a string
 *
 *Return: 0
 */
int main()
{
	printf("Size of a char: %d",sizeof(char));
	puts(" byte(s)");
	printf("Size of an int: %d",sizeof(int));
	puts(" byte(s)");
	printf("Size of a long int: %d",sizeof(long));
	puts(" byte(s)");
	printf("Size of a long long int: %d",sizeof(long long));
	puts(" byte(s)");
	printf("Size of a float: %d",sizeof(float));
	puts(" byte(s)");
	return 0;
}
